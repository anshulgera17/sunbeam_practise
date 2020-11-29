#!/bin/bash
#script to do sum of all positional paramters


clear

sum=0
for num in $*
do

	sum=`expr $sum + $num`

done

echo "sum: $sum"
