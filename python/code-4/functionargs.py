#!/usr/bin/python
def main():
	testfunc(1, 2, 3, 34, 45, 454, 545)

def testfunc(this, that, other, *args):
#	print(this, that, other, args)
	print(this, that, other)
	for n in args: print(n)
if __name__ == "__main__": main()
