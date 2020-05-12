#!/usr/bin/julia

using Pkg
#Pkg.add("StatsModels")
using ExperimentalDesign, StatsModels, GLM, DataFrames, Distributions, Random
include("gcc.jl")

function y(x)
    return run_gcc(x)
end

#random_design_generator = RandomDesign(DiscreteNonParametric([20, 300],
#                                                             [1, 100],
#                                                             [1, 100],
#                                                             [1, 100],
#                                                             [1, 100]]), 5)
random_design = rand(random_design_generator, 8)

println(random_design)
