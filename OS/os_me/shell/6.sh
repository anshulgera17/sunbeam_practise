#!/bin/bash
clear
echo -n "enter the filepath: "
read filepath

if [ -e $filepath ]
then 
	if [ -f $filepath ]
	then 
		echo "file contents are:"
		cat $filepath
		elif [ -d $filepath ]
		then
		ls -l $filepath
		else 
		echo "$filepath neither file nor dir "
		fi
	else
		echo "invalid filepath"
		fi
exit

