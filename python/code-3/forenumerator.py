#!/usr/bin/python
def main():
	fh = open('lines.txt')
	for index, line in enumerate(fh.readlines()):
		print(index, line)

if __name__ == "__main__":main()
