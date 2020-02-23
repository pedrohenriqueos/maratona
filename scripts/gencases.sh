#!/bin/bash
#./scriptgen.sh LETRA codeGEN.cpp codeACCEPTED.cpp
g++ -std=c++14 -static -lm -O2 $2 -o gen
g++ -std=c++14 -static -lm -O2 $3 -o code
for((i=0;i<=10;i++));
do
	./gen > input/"$1_$i"
	./code < input/"$1_$i" > output/"$1_$i"
done

rm gen
rm code
