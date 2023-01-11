#!/bin/sh
total=`cat /proc/meminfo | grep MemTotal | /bin/awk '{print $2}'`
free=`cat /proc/meminfo | grep MemFree | /bin/awk '{print $2}'`
use=`expr $total - $free`
echo "Mem Usage: $((use * 100 / total)) %"
