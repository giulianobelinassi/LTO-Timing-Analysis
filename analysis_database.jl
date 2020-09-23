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

	parallel = filter(Row -> Row.parallel == true, results)
	seq = filter(Row -> Row.parallel == false, results)

	mse_seq      = mse(seq.mean, seq.predicted)
	mse_parallel = mse(parallel.mean, parallel.predicted)

	mse_seq_str  = string(round(mse_seq, digits=2))
	mse_par_str  = string(round(mse_parallel, digits=2))

	println(mse_seq)
	println(mse_parallel)

	pltobj = plot(seq.expected_insns, seq.mean, yerror=1.96*seq.stdev/sqrt(15), label="Sequential", xaxis="Number of Instructions", yaxis="Time (s)")
	plot!(pltobj, parallel.expected_insns, parallel.mean, yerror=1.96*seq.stdev/sqrt(15), label="Parallel (2 threads)")
	plot!(pltobj, seq.expected_insns, seq.predicted, label=("Sequential Pred. (mse=" * mse_seq_str * ")"))
	plot!(pltobj, parallel.expected_insns, parallel.predicted, label=("Parallel Pred. (mse=" * mse_par_str * ")"))

	savefig("times-insns.svg")

	sort!(seq, [:functions, :mean])
	sort!(parallel, [:functions, :mean])

	pltobj = plot(seq.functions, seq.mean, yerror=1.96*seq.stdev/sqrt(15), label="Sequential", xaxis="Number of Functions", yaxis="Time (s)")
	plot!(pltobj, parallel.functions, parallel.mean, yerror=1.96*seq.stdev/sqrt(15), label="Parallel (2 threads)")
	plot!(pltobj, seq.functions, seq.predicted, label=("Sequential Pred. (mse=" * mse_seq_str * ")"))
	plot!(pltobj, parallel.functions, parallel.predicted, label=("Parallel Pred. (mse=" * mse_par_str * ")"))

	savefig("times-functions.svg")
end

results = CSV.read("output_corei7.csv", delim="; ", DataFrame)

# Rename labels to lowercase, as @formula seems to not like uppercase strings.
for name in names(results)
	h = name => lowercase(name)
	rename!(results, replace.(names(results), h))
end

#D = results
D = results[sample(axes(results, 1), 30; replace = false, ordered = true), :]
D = stack(D, Not([:filename, :functions, :expected_insns, :parallel, :inlined_percentage, :num_partitions]))

sort!(D, [:expected_insns, :value])

screening_model = @formula(value ~ ((expected_insns) * (parallel * num_partitions * inlined_percentage)))
screening_fit = lm(screening_model, D)

println(screening_fit)
println(adjr2(screening_fit))

results[!, :predicted] = predict(screening_fit, results)
plot_df(results)

#best_index = findmin(random_design.matrix[!, :prediction])
#best_prediction = DataFrame(select(random_design.matrix, Not(:prediction))[best_index[2], :])
#println(best_prediction)
#println(best_index)
#
#best_prediction[!, :response] = y.(eachrow(best_prediction))
#CSV.write("best_prediction.csv", best_prediction)

###############################################################################

#rename!(results, replace.(names(results), "Functions" => "_"))
#rename!(results, replace.(names(results), "-" => "_"))
#rename!(results, replace.(names(results), "R" => "r"))
#rename!(results, replace.(names(results), "Dummy " => "dummy_"))
#
#screening_model = @formula(response ~ constprop + instcombine + argpromotion + jump_threading +
#                           lcssa + licm + loop_deletion + loop_extract + loop_reduce +
#                           loop_rotate + loop_simplify + loop_unroll + loop_unroll_and_jam +
#                           loop_unswitch + mem2reg + memcpyopt + dummy_1 + dummy_2 + dummy_3)
#
#model = @formula(response ~ constprop + instcombine + argpromotion + jump_threading +
#                 lcssa + licm + loop_deletion + loop_extract + loop_reduce +
#                 loop_rotate + loop_simplify + loop_unroll + loop_unroll_and_jam +
#                 loop_unswitch + mem2reg + memcpyopt)
#
#screening_fit = lm(screening_model, results)
#println(screening_fit)
#
#fit = lm(model, results)
#println(fit)
#
#design_distribution = DesignDistribution(NamedTuple{getfield.(model.rhs, :sym)}(
#    repeat([DiscreteNonParametric([-1, 1],
#                                  [0.5, 0.5])], 16)))
#
#random_design = rand(design_distribution, 500_000)
#random_design.matrix[!, :prediction] = predict(fit, random_design.matrix)
#
#best_index = findmin(random_design.matrix[!, :prediction])
#best_prediction = DataFrame(select(random_design.matrix, Not(:prediction))[best_index[2], :])
#println(best_prediction)
#println(best_index)
#
#best_prediction[!, :response] = y.(eachrow(best_prediction))
#CSV.write("best_prediction.csv", best_prediction)
