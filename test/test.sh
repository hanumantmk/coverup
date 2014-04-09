#!/bin/sh

for i in `seq 1 255`; do
    mkdir -p arcs/$i

    ./example $i
    cp *.gcno arcs/$i/
    mv *.gcda arcs/$i/
done
