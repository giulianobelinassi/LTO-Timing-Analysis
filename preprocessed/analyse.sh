#!/bin/bash

declare -a frequency

run()
{
	out=$(/tmp/gcc11_parser/usr/local/bin/gcc -Wno-all -O1 -c $file)
	num_funcs=$(echo $out | awk -F- '{ print $1 }')
	if [ -z ${frequency[$num_funcs]} ]; then
		frequency[$num_funcs]=0
	fi
	frequency[$num_funcs]=$((${frequency[$num_funcs]} + 1))

	rep=${frequency[$num_funcs]}

	echo "Processing $file: ${out}-${rep}$1"

	cp $file ../processed/${out}-${rep}$1
}


for file in *.c; do
	run ".c"
done

for file in *.cc; do
	run ".cc"
done
