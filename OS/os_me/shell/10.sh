#!/bin/bash
echo "executable files are: "
for filepath in `ls`
do 
	if [ -f $filepath -a -x $filepath ]
	then 
		echo $filepath
		fi
done 
exit
