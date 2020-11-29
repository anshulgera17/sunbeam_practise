#!/bin/bash

# script to add two numbers
# shell script language is typeless language: no need to mention data type for any variable
# there are 3 types of qoutes: double qoutes (" "), single qoutes (' ') and back qoutes (` `) in shell scripts
# echo command used to print the messages on to the terminal

clear

echo -n "enter n1: "
read n1

echo -n "enter n2: "
read n2

res=`expr $n1 + $n2`
echo "res: $res"

exit
