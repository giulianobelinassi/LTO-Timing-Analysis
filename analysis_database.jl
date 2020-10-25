#!/usr/bin/julia
using ExperimentalDesign, StatsModels, GLM, DataFrames, Distributions, Random, CSV, StatsBase, Plots, LinearAlgebra

function plot_df(results)
	mse(y1, y2) = mean((y1 - y2) .^ 2)

	sort!(results, [:expected_insns])

	transform!(results, AsTable(5:15) .=>
						  ByRow.([mean, sqrt∘var]) .=> [:mean, :stdev])

	parallel2 = filter(Row -> Row.parallel == 2, results)
	parallel4 = filter(Row -> Row.parallel == 4, results)
	parallel8 = filter(Row -> Row.parallel == 8, results)
	seq = filter(Row -> Row.parallel == 1, results)

	mse_seq       = mse(seq.mean, seq.predicted)
	mse_parallel2 = mse(parallel2.mean, parallel2.predicted)
	mse_parallel4 = mse(parallel4.mean, parallel4.predicted)
	mse_parallel8 = mse(parallel8.mean, parallel8.predicted)

	mse_seq_str   = string(round(mse_seq, digits=2))
	mse_par2_str  = string(round(mse_parallel2, digits=2))
	mse_par4_str  = string(round(mse_parallel4, digits=2))
	mse_par8_str  = string(round(mse_parallel8, digits=2))

	println("MSE Sequential = " * string(mse_seq))
	println("MSE Parallel 2 = " * string(mse_parallel2))
	println("MSE Parallel 4 = " * string(mse_parallel4))
	println("MSE Parallel 8 = " * string(mse_parallel8))

	pltobj = plot(seq.expected_insns, seq.mean, yerror=1.96*seq.stdev/sqrt(15), label="Sequential", xaxis="Number of Instructions", yaxis="Time (s)")
	plot!(pltobj, parallel8.expected_insns, parallel8.mean, yerror=1.96*seq.stdev/sqrt(15), label="Parallel (8 threads)")
	plot!(pltobj, seq.expected_insns, seq.predicted, label=("Sequential Pred. (mse=" * mse_seq_str * ")"))
	plot!(pltobj, parallel8.expected_insns, parallel8.predicted, label=("Parallel Pred. (mse=" * mse_par8_str * ")"))

	savefig("times-insns.svg")

	sort!(seq, [:functions, :mean])
	sort!(parallel8, [:functions, :mean])

	pltobj = plot(seq.functions, seq.mean, yerror=1.96*seq.stdev/sqrt(15), label="Sequential", xaxis="Number of Functions", yaxis="Time (s)")
	plot!(pltobj, parallel8.functions, parallel8.mean, yerror=1.96*seq.stdev/sqrt(15), label="Parallel (8 threads)")
	plot!(pltobj, seq.functions, seq.predicted, label=("Sequential Pred. (mse=" * mse_seq_str * ")"))
	plot!(pltobj, parallel8.functions, parallel8.predicted, label=("Parallel Pred. (mse=" * mse_par8_str * ")"))

	savefig("times-functions.svg")
end

# Rename labels to lowercase, as @formula seems to not like uppercase strings.
function lowercase_columns!(D)
	for name in names(D)
		h = name => lowercase(name)
		rename!(D, replace.(names(D), h))
	end
end

function kl_prediction(D, formula)
	f = @formula(0 ~ ((expected_insns + expected_insns ^ 2) +
												(functions + functions ^ 2) +
												(inlined_percentage + inlined_percentage ^ 2) +
												(num_partitions + num_partitions ^ 2)) *
												(parallel + parallel ^ 2))


	selected_rows = kl_exchange(f,
								D,
								seed_design_size = 2,
								experiments = 11,
								design_k = 11,
								candidates_l = size(D, 1) - 11)

	return selected_rows
end

# Open Data for analysis
results = CSV.read("output_corei7.csv", delim="; ", DataFrame)

# Rename labels to lowercase
lowercase_columns!(results)

# Filter 0-insns programs
filter!(:expected_insns => x -> x > 0, results)

# Stack data on exectution_i into multiple lines
stacked = stack(results, Not([:filename, :functions, :expected_insns, :parallel, :inlined_percentage, :num_partitions]))

# Set regression formula
regression_formula = @formula(value ~ ((expected_insns + expected_insns ^ 2) +
                                            (functions + functions ^ 2) +
                                            (inlined_percentage + inlined_percentage ^ 2) +
                                            (num_partitions + num_partitions ^ 2)) *
                                            (parallel + parallel ^ 2))

## O que fazer com isso ?
kl = kl_prediction(stacked, regression_formula)
##println(stacked[kl])

# Set train set
train_ratio = 0.2
train_size = round(Int, 0.2 * nrow(results))
train_rows = shuffle(1:nrow(results))[1:train_size]
train = stacked[train_rows, :]

# Set test set
#test_rows = [x for x in 1:nrow(results) if !(x in train_rows)]
#test  = stacked[test_rows, :]

# Fit data into test set using formula
screening_fit = lm(regression_formula, train)

# Print coefficient and R2 error
println(screening_fit)
println("R² = " * string(adjr2(screening_fit)))

# Predict data based on fitted info
results[!, :predicted] = predict(screening_fit, results)
plot_df(results)
