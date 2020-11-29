#!/bin/bash
# 1. the abobe line is called as shebang line: kernel searches the path of the shell to execute the script
# 2. bash shell executes the script sequentially
# 3. execution of shell script is slower than execution of c programs
# 4. shell scripts is same like batch files in windows
# 5. in shell script we can write set of commands that we want to execute, and when we run the script once all commands in the script
# executes sequentially
# shell can run commands(internal, external), programs, so scripts are combinations of commands and program
# commments starts with #-> till end of line considered as comment

# shell to demonstrate the linux commands

clear

echo "cal of current month: "
cal

echo -n "today's date is: "
date +"%d-%m-%Y"

exit
