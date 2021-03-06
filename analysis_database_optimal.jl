#!/usr/bin/julia
using ExperimentalDesign, StatsModels, GLM, DataFrames, Distributions, Random, CSV, StatsBase, Plots, LinearAlgebra

function mse(y, ŷ)
	n = length(y)
	diff = y - ŷ
	acc = dot(diff, diff)

	return acc/n
end

function plot_df(results)
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

	println(mse_seq)
	println(mse_parallel2)
	println(mse_parallel4)
	println(mse_parallel8)

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

results = CSV.read("output_corei7.csv", delim="; ", DataFrame)


filter!(:Expected_insns => x -> x > 0, results)

# Rename labels to lowercase, as @formula seems to not like uppercase strings.
for name in names(results)
	h = name => lowercase(name)
	rename!(results, replace.(names(results), h))
end

#train_ratio = 0.2
#train_size = round(Int, 0.2 * nrow(results))
#train_rows = shuffle(1:nrow(results))[1:train_size]
#D = results[train_rows, :]
#
#test_rows = [x for x in 1:nrow(results) if !(x in train_rows)]
#D = results[test_rows, :]

D = results
D = stack(D, Not([:filename, :functions, :expected_insns, :parallel, :inlined_percentage, :num_partitions]))
sort!(D, [:expected_insns, :value])

f = @formula 0 ~ ((expected_insns + expected_insns ^ 2) +
                                            (functions + functions ^ 2 + 1 / functions)) *
                                            parallel * inlined_percentage

optimal_design = OptimalDesign(D, f, 10)
println(optimal_design)

#regression_full = @formula(value ~ ((expected_insns + expected_insns ^ 2) +
#                                            (functions + functions ^ 2 + 1 / functions)) *
#                                            parallel * inlined_percentage)
#
#screening_model = regression_full
#screening_fit = lm(screening_model, D)
#
#println(screening_fit)
#println(adjr2(screening_fit))
#
#results[!, :predicted] = predict(screening_fit, results)
#plot_df(results)
