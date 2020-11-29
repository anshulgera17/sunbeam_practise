#!/usr/bin/python
def main():
	print("this is the function.py file")

	for i in inclusive_range(0, 25, 1):
		print(i)

def inclusive_range(start, stop, step)	
	i = start
	while i <= stop:
		yield i
		i += step

if __name__ == "__main__": main()
