#!/usr/bin/julia

using Distributions, DataFrames, CSV, StatsBase, Plots

results = CSV.read("output_corei7.csv", delim="; ", DataFrame)
# Rename labels to lowercase, as @formula seems to not like uppercase strings.
for name in names(results)
	h = name => lowercase(name)
	rename!(results, replace.(names(results), h))
end

filter!(:parallel => x -> x == 1, results)
max_insns = maximum(results.expected_insns)
max_functions = maximum(results.functions)

pltobj = histogram(results.expected_insns,
                   xaxis="Number of Instructions", yaxis="Frequency",
				   label="Frequency", bins=50)
savefig("histogram.svg")
