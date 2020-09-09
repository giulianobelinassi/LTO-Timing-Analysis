#!/usr/bin/julia

using Pkg
include("gcc.jl")

file_prefix = "processed"
num_executions = 15

out_file = open("output.csv", "w")

function output_csv_header()
	header = "Filename; Functions; Expected_insns; Parallel; "

	for i in 1:(num_executions-1)
		header = header * "Execution_" * string(i) * "; "
	end

	header = header * "Execution_" * string(num_executions)

	println(out_file, header)
end

function output_csv_line(file, num_functions, expected_insn, min_lto_partition, parallel, data)
	str = file * "; " * string(num_functions) * "; " * string(expected_insn) * "; " * string(parallel)

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

	for file in files
		if file == "README.txt"
			continue
		end

		println("Testing file: ", file)

		splitted = split(file, ".")
		base = splitted[1]
		ext = splitted[2]

		base_split = split(base, "-")
		num_func_str = base_split[1]
		expected_insn_str = base_split[2]
		num_funcs = parse(Int64, num_func_str)
		expected_insn = parse(Int64, expected_insn_str)

		serial_results   = y([file, 1, false])
		parallel_results = y([file, 1, true])

		output_csv_line(file, num_funcs, expected_insn, 1, false, serial_results)
		output_csv_line(file, num_funcs, expected_insn, 1, true, parallel_results)
	end
end

generate_database()
close(out_file)
