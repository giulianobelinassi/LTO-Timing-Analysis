#!/usr/bin/julia

using ExperimentalDesign, StatsModels, GLM, DataFrames, Distributions, Random, CSV, StatsBase

results = CSV.read("output_corei7.csv", delim="; ", DataFrame)

# Rename labels to lowercase, as @formula seems to not like uppercase strings.
for name in names(results)
	h = name => lowercase(name)
	rename!(results, replace.(names(results), h))
end

# Take the mean
#results =  transform(results, AsTable(5:length(names(results))) .=>
#                              ByRow.(mean∘skipmissing) .=> :mean)

#D = results
D = results[sample(axes(results, 1), 30; replace = false, ordered = true), :]
D = stack(D, Not([:filename, :functions, :expected_insns, :parallel]))

screening_model = @formula(value ~ ((expected_insns + expected_insns^2) * (parallel)))
screening_fit = lm(screening_model, D)

println(screening_fit)

println(adjr2(screening_fit))

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
