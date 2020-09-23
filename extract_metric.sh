#!/bin/bash

declare -a frequency

run()
{
	out=$(/tmp/gcc11_autopar/usr/local/bin/gcc -Wno-all -fparallel-jobs=2 --param=promote-statics=1 --param=balance-partitions=0 -O1 -c -o /tmp/temp.o $file)
	inlined=$(echo $out | awk {'print $2'})
	echo "Processing $file: extracted: $inlined"
	echo "$file; $inlined" >> table.csv
}


for file in processed/*.c; do
	run ".c"
done

for file in processed/*.cc; do
	run ".cc"
done
