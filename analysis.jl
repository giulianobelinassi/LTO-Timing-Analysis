#!/usr/bin/julia

using Pkg
#Pkg.add("StatsModels")
using ExperimentalDesign, StatsModels, GLM, DataFrames, Distributions, Random
include("gcc.jl")

function generate_file_distribution()
	prefix = "processed"

	files = readdir(prefix)
	maximum = 0


	for file in files
		splitted = split(file, ".")
		base = splitted[1]
		ext = splitted[2]

		base_split = split(base, "-")
		num_func_str = base_split[1]
		num_funcs = parse(Int64, num_func_str)

		maximum = max(maximum, num_funcs)
	end

	names = fill(String[], maximum)

	for i in 1:maximum
		names[i] = String[]
	end


	for file in files
		splitted = split(file, ".")
		base = splitted[1]
		ext = splitted[2]

		base_split = split(base, "-")
		num_func_str = base_split[1]
		size_str = base_split[2]
		ret_str = base_split[3]

		num_funcs = parse(Int64, num_func_str)

		if num_funcs == 0
			continue
		end

		push!(names[num_funcs], file)
	end

	return names
end

function compute_fill_rate(names)
	len = length(names)
	acc = 0

	for i in 1:len
		if names[i] != []
			acc = acc + 1
		end
	end

	print(acc/len)
end

function y(x)
    return run_gcc(x)
end

# Used for DiscreteNonParametric(fp, prob), but use DiscreteUniform for now.
# fp   = [20 + 14*n for n in 0:14]
# prob = [1/15 for n in 0:14]

#random_design_generator = RandomDesign((
#          Distributions.DiscreteUniform(1, 300),     # File size, in number of functions
#          Distributions.DiscreteUniform(1, 10000),   # Min lto partition
#          Distributions.Bernoulli(0.5)))             # Run in parallel?
#
#println(random_design_generator)
#
#random_design = rand(random_design_generator, 8)
#random_design[!, :response] = y.(eachrow(random_design[:, :]))
#
#println(random_design)


names = generate_file_distribution()
compute_fill_rate(names)
