#!/usr/bin/julia
# Taken from https://github.com/phrb/ExperimentalDesign.jl/blob/master/examples/Screening%20with%20Plackett-Burman%20Designs.ipynb

using Pkg

#Pkg.add("StatsModels")

using ExperimentalDesign, StatsModels, GLM, DataFrames, Distributions, Random

include("gcc.jl")

design = PlackettBurman(5)
design.matrix

println(design)


exit()

design.dummy_factors

design.factors

function y(x)
    return run_gcc(x)
end

Random.seed!(192938)

design.matrix[!, :response] = y.(eachrow(design.matrix[:, collect(design.factors)]))
design.matrix

lm(design.formula, design.matrix)

lm(term(:response) ~ sum(term.(design.factors)), design.matrix)

Random.seed!(8418172)

random_design_generator = RandomDesign(DiscreteNonParametric([-1, 1], [0.5, 0.5]), 6)
random_design = rand(random_design_generator, 8)

random_design[!, :response] = y.(eachrow(random_design[:, :]))
random_design

lm(random_design_generator.formula, random_design)

Random.seed!(2989476)

factorial_design = FullFactorial(fill([-1, 1], 6), explicit = true)
factorial_design.matrix[!, :response] = y.(eachrow(factorial_design.matrix[:, :]))

println(factorial_design)

lm(factorial_design.formula, factorial_design.matrix)

