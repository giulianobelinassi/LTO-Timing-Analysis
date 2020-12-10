#!/bin/bash

run()
{
	out=$(/tmp/gcc11_autopar/usr/local/bin/gcc -Wno-all -fparallel-jobs=2 --param=promote-statics=1 --param=balance-partitions=0 -O2 -c -o /tmp/temp.o $1)
	echo $out
	echo "Processing $1..."
	cp $1 processed/${out}$2
}

mkdir -p processed

for file in preprocessed/*.c; do
	run $file ".c"
done

for file in preprocessed/*.cc; do
	run $file ".cc"
done
