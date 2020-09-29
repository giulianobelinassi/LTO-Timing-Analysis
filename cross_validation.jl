#!/usr/bin/julia
using ExperimentalDesign, StatsModels, GLM, DataFrames, Distributions, Random, CSV, StatsBase, Plots, LinearAlgebra

function mse(y, ŷ)
	n = length(y)
	diff = y - ŷ
	acc = dot(diff, diff)

	return acc/n
end

out_file = open("validation.csv", "w")

function output_csv_header()
	header = "Exectution; Training_size; Correct; Correct_parallel; MSE"
	println(out_file, header)
end

function output_csv_line(execution, training_size, correct, correct_parallel, MSE)
	str = string(execution) * "; " * string(training_size) * "; " * string(correct) * "; " * string(correct_parallel) * "; " * string(MSE)

	println(out_file, str)
end

results = CSV.read("output_corei7.csv", delim="; ", DataFrame)

filter!(:Expected_insns => x -> x > 0, results)

# Rename labels to lowercase, as @formula seems to not like uppercase strings.
for name in names(results)
	h = name => lowercase(name)
	rename!(results, replace.(names(results), h))
end

output_csv_header()

all_corrects = Int64[]
all_corrects_parallel = Int64[]
all_mse_mean = Float64[]

for j in 1:100
	train_ratio = 0.2
	train_size = round(Int, train_ratio * nrow(results))
	train_rows = shuffle(1:nrow(results))[1:train_size]
	D = results[train_rows, :]

	D = stack(D, Not([:filename, :functions, :expected_insns, :parallel, :inlined_percentage, :num_partitions]))
	sort!(D, [:expected_insns, :value])

	regression_full = @formula(value ~ ((expected_insns + expected_insns ^ 2) +
												(functions + functions ^ 2 + 1 / functions)) *
												parallel * inlined_percentage)

	screening_model = regression_full
	screening_fit = lm(screening_model, D)

	test_rows = [x for x in 1:nrow(results) if !(x in train_rows)]
	Dtest = results[test_rows, :]

	Dtest[!, :predicted] = predict(screening_fit, Dtest)
	sort!(Dtest, [:filename, :parallel])

	corrects = 0
	parallel_correct = 0
	c = 0
	real_best = Float64[]
	pred_best = Float64[]
	len = Int64(floor(nrow(Dtest)/4)) - 1

	for i in 1:len
		c += 1

		real_1 = Dtest[i*4    , :execution_1]
		real_2 = Dtest[i*4 + 1, :execution_1]
		real_4 = Dtest[i*4 + 2, :execution_1]
		real_8 = Dtest[i*4 + 3, :execution_1]

		predicted_1 = Dtest[i*4    , :predicted]
		predicted_2 = Dtest[i*4 + 1, :predicted]
		predicted_4 = Dtest[i*4 + 2, :predicted]
		predicted_8 = Dtest[i*4 + 3, :predicted]

		real_t      = [real_1, real_2, real_4, real_8]
		predicted_t = [predicted_1, predicted_2, predicted_4, predicted_8]

		argmin_real = argmin(real_t)
		argmin_predicted = argmin(predicted_t)

		if argmin_real == argmin_predicted
			corrects += 1
			parallel_correct += 1
		elseif argmin_real > 1 && argmin_predicted > 1
			parallel_correct += 1
		end

		append!(real_best, real_t[argmin_real])
		append!(pred_best, predicted_t[argmin_predicted])
	end
	best_mse = mse(real_best, pred_best)

	println("Execution " * string(j))
	println("Corrects: " * string(corrects) * " from " * string(c) * ". Ratio = " * string(corrects/c))
	println("Parallel correct: " * string(parallel_correct))
	println("MSE: " * string(best_mse))

	append!(all_corrects, corrects)
	append!(all_corrects_parallel, parallel_correct)
	append!(all_mse_mean, best_mse)

	output_csv_line(j, c, corrects, parallel_correct, best_mse)
end


mean_corrects = mean(all_corrects)
mean_corrects_parallel = mean(all_corrects_parallel)
mean_mse = mean(all_mse_mean)

println("------------------------")
println("Mean corrects: " * string(mean_corrects))
println("Mean corrects parallel: " * string(mean_corrects_parallel))
println("Mean MSE: " * string(mean_mse))
