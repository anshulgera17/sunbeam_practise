#!/usr/bin/python
import re
def main():
	fh = open('raven.txt')
	for line in fh:
		if re.search('(ans|anc)hul', line):
			print(line)

if __name__ == "__main__":main()
