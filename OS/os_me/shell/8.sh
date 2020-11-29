#!/bin/bash
clear
echo -n "enter the no. of rows: "
read n
i=0
 while [ $i -le $n ]
do
	j=0
	while [ $j -le `expr $n - $i` ]
	do
		echo -n " "
		j=`expr $j + 1`
	done
		j=0
	while [ $j -lt $i ]
	do
	echo -n "* "
	j=`expr $j +1`
done
echo ""
i=`expr $i +1`
done
exit
