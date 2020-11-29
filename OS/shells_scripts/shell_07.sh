#!/bin/bash

#script to print the table of the number

clear
echo -n "enter the number: "
read num

echo "while => table of $num is: "
i=1
while [ $i -le 10 ]
do
	res=`expr $num \* $i`
	echo "$res"
	i=`expr $i + 1`

done

echo "until => table of $num is: "
i=1;
until [ $i -gt 10 ]
do
	res=`expr $num \* $i`
	echo "$res"
	i=`expr $i + 1`
done
exit
