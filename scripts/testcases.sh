#!/bin/bash
#./scripttest.sh LETRA CODE.cpp
g++ -std=c++14 -static -lm -O2 $2
 
for((i=0;i<=10;i++));
do
	time ./a.out < input/"$1_$i" > output/"$1_$i.out"
	echo "Caso $i"
	diff --brief output/"$1_$i" output/"$1_$i.out" || break
	rm output/"$1_$i.out"
done

rm a.out
