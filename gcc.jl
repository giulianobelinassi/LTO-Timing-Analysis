# Lazily generate a C code so that it can be used as input to GCC.

function maybe_generate_code(size, file)
    if !isfile(file)
        command = `csmith --max-funcs $size`
        run(pipeline(command, stdout = file))
    end
end

function collect_csmith_statistics(fpath)
    found = false
    file = open(fpath, "r")

    for line in eachline(file)
        if line == "/************************ statistics *************************"
            found = true
        end
    end

    if !found
        exit("Provided file seems not to be a valid csmith file")
    end
end

# Convert the input vector to parameters that GCC can understeand, and
# launch it measuring the time taken.

function run_gcc(x)
	prefix = "csmith_cache/"

	if !isdir(prefix)
	    mkdir(prefix)
	end

	program_size = convert(Int64, x[1])
	file = prefix * string(x[1]) * ".c"
	lto_min_partition = x[2]
	run_parallel = x[3]

	if (run_parallel)
		parallel = "-fparallel-jobs=2"
	else
		parallel = ""
	end

	maybe_generate_code(program_size, file)

	proc = "/tmp/gcc11_autopar/usr/local/bin/gcc"
	argv = ["--param=promote-statics=1", "-I/usr/include/csmith/", "-Wno-all", "--param=lto-min-partition=$lto_min_partition", file]

	if parallel != ""
		append!(argv, [parallel])
	end

	command = `$proc $argv`

	t1 = time_ns()
	run(command)
	t2 = time_ns()


	rm("a.out")

return (t2 - t1)/1e9
end


# Quick test
#x = run_gcc([10, 1, 1, 1, 1])
#println(x)
