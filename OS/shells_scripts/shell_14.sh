#!/bin/bash

#script to write function to print the table

function table()
{
		for i in 1 2 3 4 5 6 7 8 9 10
		do
				res=`expr $1 \* $i`
				echo "$res"
		done
}


clear

echo -n "enter the number: "
read num

table $num

#res=$(table $num)
#echo "table of $num is: "
#echo "$res"

exit
