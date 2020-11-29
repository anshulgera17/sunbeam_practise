#!/usr/bin/python
import re
def main():
	fh = open('raven.txt')
	for line in fh:
		match = re.search('(ans|anc)hul', line)
		if match:
			print(line.replace(match.group(), '####'))

if __name__ == "__main__":main()

