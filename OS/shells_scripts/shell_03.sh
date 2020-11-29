#!/bin/bash
# shebang line

# script to calculate area of rectangle

clear

echo -n "enter the lenght: "
read len

echo -n "enter the breadth: "
read br

area=`expr $len \* $br`

echo "area of rectangle is: $area"

exit
