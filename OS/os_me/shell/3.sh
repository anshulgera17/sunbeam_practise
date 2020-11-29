#!/bin/bash
clear
echo -n "enter the length: "
read len
echo -n "enter hte breath: "
read br
area=`expr $len \* $br`
echo "area of rectangle is : $area"
exit
	
