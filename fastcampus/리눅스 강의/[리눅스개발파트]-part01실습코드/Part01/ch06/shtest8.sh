#!/bin/sh

num=5

func1()
{
	echo "func1 process"
}

func2()
{
	func_val=0
	echo "func2 process"
	while [ $func_val -lt $1 ]
	do
		echo $func_val
		func_val=`expr $func_val + 1`
	done
}

func1
func2 $num
