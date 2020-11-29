#!/bin/bash
# script to check the filepath is valid or not
# if valid, if file display the file contents, and 
# if directory display the dir contents

clear
echo -n "enter the filepath: "
read filepath

if [ -e $fileath ]
then
	if [ -f $filepath ]
	then
		echo "file contents are:"
			cat $filepath
	elif [ -d $filepath ]
	then
			ls -l $filepath
	else
		echo "$filepath neither file nor dir"
	fi
else
	echo "invalid filepath"
fi

