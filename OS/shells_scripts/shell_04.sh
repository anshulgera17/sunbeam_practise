#!/bin/bash

#script to calculate area of circle

clear

PI=3.14

echo -n "enter the radius: "
read rad

area=`echo "scale=2; $PI * $rad * $rad" | bc`
echo "area of circle is: $area sq unit"
exit


