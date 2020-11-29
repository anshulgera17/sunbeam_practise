#!/bin/bash
clear
echo "my name is anshul gera"
echo "try to speak in english"
echo -n "enter n1: "
read n1
echo -n "enter n2: "
read n2
res=`expr $n1 + $n2`
echo "res: $res"
exit
