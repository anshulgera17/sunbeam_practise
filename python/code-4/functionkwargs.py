#!/usr/bin/python
def main():
	testfunc(one = 1, two = 2, three = 3)

def testfunc(**kwargs):
	print("this is test function", kwargs['one'], kwargs['two'], kwargs['three'])

if __name__ == "__main__": main()
