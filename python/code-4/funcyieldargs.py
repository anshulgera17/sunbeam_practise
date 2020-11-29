#!/usr/bin/python
def main():
	print("this is the functions.py file ")
	for i in inclusive_range():
		print(i)

def inclusive_range(*args):
	numargs = len(args)
	if numargs < 1: raise TypeError('required atleast one argument')
	elif numargs == 1:
		stop = args[0]
		start = 0
		step = 1
	elif numargs == 2:
		(start, stop) = args
		step = 1
	elif numargs == 3:
		(start, stop, step) = args
	else: raise TypeError('inclusive_range expected atmost 3 arguments, got {}'.format(numargs))
	i = start
	while i <= stop:
		yield i
		i += step
if __name__ == "__main__": main()
