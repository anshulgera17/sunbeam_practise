#!/bin/bash
clear
if [ $# -ne 2 ]
then 
	echo "invalid no. of paraments to script: $0"
	exit

fi
	res=`expr $1 + $2`
	echo "res: $res"
exit
