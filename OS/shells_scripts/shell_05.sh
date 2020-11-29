#!/bin/bash

#script to check the year is leap or not

# relational operators:
# -lt -> less than, -le -> less than or equal to
# -gt -> greater than, -ge -> greater than or equal to
# -eq -> equal to equal to, -ne -> not equal to

# logical operators:
# logical AND -> -a, logical OR -> -o, logical NOT -> !

# condition operators
# -e $filepath -> to check filepath is valid or not
# -f $filepath -> to check filepath is regular file or not
# -d $filepath -> to check filepath is directory file or not
# -r $filepath -> to check filepath has read permission or not
# -w $filepath -> to check filepath has write permission or not
# -x $filepath -> to check filepath has execute permission or not



clear

echo -n "enter the year: "
read yr

# if[ yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0 ]
if [ `expr $yr % 4` -eq 0 -a `expr $yr % 100` -ne 0 -o `expr $yr % 400` -eq 0 ]
then
	echo "$yr is leap year"
else
	echo "$yr is not leap year"
fi

exit

