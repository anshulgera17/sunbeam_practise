#!/usr/bin/python
#read lines from the file 

fh = open('lines.txt')
for line in fh.readlines():
 #  	print(line,end=' ') this is not working
 	print(line)
