#!/bin/sh
n=5
while [ "$n" -ne 0 ]
do
    echo $n
    n=`expr $n - 1`
done

