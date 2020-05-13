#!/usr/bin/julia

using Pkg
#Pkg.add("StatsModels")
using ExperimentalDesign, StatsModels, GLM, DataFrames, Distributions, Random
include("gcc.jl")

function y(x)
    return run_gcc(x)
end

# Used for DiscreteNonParametric(fp, prob), but use DiscreteUniform for now.
# fp   = [20 + 14*n for n in 0:14]
# prob = [1/15 for n in 0:14]

random_design_generator = RandomDesign((
          Distributions.DiscreteUniform(1, 300),     # File size, in number of functions
          Distributions.DiscreteUniform(1, 1000000), # Max lto Partition.
          Distributions.DiscreteUniform(1, 65536),   # Max streaming Parallelism
          Distributions.DiscreteUniform(1, 10000),   # Min lto partition
          Distributions.DiscreteUniform(1, 65536)))  # Lto Partitions

println(random_design_generator)

random_design = rand(random_design_generator, 8)
random_design[!, :response] = y.(eachrow(random_design[:, :]))

println(random_design)
