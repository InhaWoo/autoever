#!/bin/sh

echo "argument number is $#"
echo "the argument $*"
echo "pid $$"

top &
echo "background pid $!"
echo "result $?"
