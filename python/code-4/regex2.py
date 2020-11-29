#!/usr/bin/python
import re
def main():
	fh = open('raven.txt')
	for line in fh:
		print(re.sub('(ans|anc)hul', '####', line))

if __name__ == "__main__":main()

