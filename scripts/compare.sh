#!/bin/bash
g++ -std=c++17 -static -lm -O2 $1 -o code
g++ -std=c++17 -static -lm -O2 $2 -o ok
g++ -std=c++17 -static -lm -O2 $3 -o gen

for((i=0;i<=50;i++));
do
	./gen >"in"
	time ./code <"in" > "$i.out1"
	./ok <"in" > "$i.out2"
	echo "Caso $i"
	diff --brief "$i.out1" "$i.out2" || break
	rm "$i.out2"
	rm "$i.out1"
	rm "in"
done

rm code
rm ok
rm gen
