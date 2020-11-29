#!/bin/bash

#script to write menu driven program: calculator

function menu()
{
		clear
		echo "CALCULATOR"
		echo "0. EXIT"
		echo "1. ADDITION"
		echo "2. SUBSTRACTION"
		echo "3. PRODUCT"
		echo "4. DIVISION"

		echo "enter the choice:"
		read choice

		echo "$choice"
}

function addition()
{
		res=`expr $1 + $2`
		echo "$res"
}

function substraction()
{
		res=`expr $1 - $2`
		echo "$res"
}

function product()
{
		res=`expr $1 \* $2`
		echo "$res"
}

function division()
{
		res=`expr $1 / $2`
		echo "$res"
}

clear

while [ 1 ]
do

	ch=$(menu )

	case $ch in
	0) exit
	;;

	1)  
			echo -n "enter the value of n1: "
			read n1

			echo -n "enter the value of n2: "
			read n2

			res=$(addition $n1 $n2)
			echo "addition: $res"
	;;

	2)
			echo -n "enter the value of n1: "
			read n1

			echo -n "enter the value of n2: "
			read n2
			res=$(substraction $n1 $n2)
			echo "substraction: $res"
	;;

	3)
			echo -n "enter the value of n1: "
			read n1

			echo -n "enter the value of n2: "
			read n2
			res=$(product $n1 $n2)
			echo "product: $res"
	;;

	4)
			echo -n "enter the value of n1: "
			read n1

			echo -n "enter the value of n2: "
			read n2
			res=$(division $n1 $n2)
			echo "division: $res"
	;;

	*) echo "invalid choice"

	esac

	echo -n "enter to continue..."
	read c

done



