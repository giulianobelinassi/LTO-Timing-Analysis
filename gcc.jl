#!/usr/bin/julia

# Convert the input vector to parameters that GCC can understeand, and
# launch it measuring the time taken.

function run_gcc(x)
    program_size = string(x[1]) * ".c"
    lto_max_partition = x[2]
    lto_max_streaming_parallelism = x[3]
    lto_min_partition = x[4]
    lto_partitions = x[5]

    command = `gcc -flto
               $program_size
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
