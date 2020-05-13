# Lazily generate a C code so that it can be used as input to GCC.

function maybe_generate_code(size, file)
    if !isfile(file)
        command = `csmith --max-funcs $size`
        run(pipeline(command, stdout = file))
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
    lto_max_partition = x[2]
    lto_max_streaming_parallelism = x[3]
    lto_min_partition = x[4]
    lto_partitions = x[5]

    maybe_generate_code(program_size, file)

    command = `gcc -flto
               -I/usr/include/csmith/
               -Wno-all
               $file
               --param=lto-max-partition=$lto_max_partition
               --param=lto-max-streaming-parallelism=$lto_max_streaming_parallelism
               --param=lto-min-partition=$lto_min_partition
               --param=lto-partitions=$lto_partitions`

    t1 = time_ns()
    run(command)
    t2 = time_ns()

    rm("a.out")

    return (t2 - t1)/1e9
end


# Quick test
#x = run_gcc([10, 1, 1, 1, 1])
#println(x)
