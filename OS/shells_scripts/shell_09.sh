#!/bin/bash
#script to print the table using for loop

clear

echo -n "enter the number: "
read num

echo "table of $num is: "

for i in 1 2 3 4 5 6 7 8 9 10
do
	res=`expr $num \* $i`
	echo "$res"
done

exit
