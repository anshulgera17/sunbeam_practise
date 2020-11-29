#!/bin/bash
#script to add two positional paramters


clear

if [ $# -ne 2 ]
then
	echo "invalid no. of parameters to script : $0"
	exit
fi

res=`expr $1 + $2`
echo "res: $res"

exit

