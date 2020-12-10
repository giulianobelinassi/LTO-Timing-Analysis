#!/usr/bin/julia

using Pkg
include("gcc.jl")

file_prefix = "processed"
num_executions = 15

out_file = open("output.csv", "w")

function output_csv_header()
	header = "filename; functions; expected_insns; inlined_functions; parallel; "

	for i in 1:(num_executions-1)
		header = header * "execution_" * string(i) * "; "
	end

	header = header * "execution_" * string(num_executions)

	println(out_file, header)
end

function output_csv_line(file, num_functions, expected_insn, inlined_functions, parallel, data)
	str = file * "; " * string(num_functions) * "; " * string(expected_insn) * "; " *
	string(inlined_functions) * "; " * string(parallel)

	for d in data
		str = str * "; " * string(d)
	end

	println(out_file, str)
end

function y(x)
	runs = Float64[]

	for i in 1:num_executions
		push!(runs, run_gcc(x))
	end

	return runs
end

function generate_database()
	prefix = file_prefix

	files = readdir(prefix)
	output_csv_header()

	num_files = length(files)

	i = 0
	for file in files
		if file == "README.txt"
			continue
		end

		a = Int64(floor((i * 100)/num_files))
		percent = "[" * string(a) * "%]"

		println(percent, " Testing file: ", file)

		splitted = split(file, ".")
		base = splitted[1]
		ext = splitted[2]

		base_split = split(base, "-")
		num_func_str = base_split[1]
		expected_insn_str = base_split[2]
		inlined_funcs_str = base_split[3]
		num_funcs = parse(Int64, num_func_str)
		expected_insn = parse(Int64, expected_insn_str)
		inlined_funcs = parse(Int64, inlined_funcs_str)

		for threads in (1, 2, 4, 8)
			result = y([file, 1, threads])
			output_csv_line(file, num_funcs, expected_insn, inlined_funcs, threads, result)
		end

		i = i + 1
	end
end

generate_database()
close(out_file)
