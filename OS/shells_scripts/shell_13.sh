#!/bin/bash
#script to write a function and add two numbers


function add()
{
		sum=`expr $1 + $2`
		echo "$sum"
}

clear

echo -n "enter the n1: "
read n1

echo -n "enter the n1: "
read n2

add $n1 $n2

#res=$(add$n1 $n2)
#echo "res: $res"
