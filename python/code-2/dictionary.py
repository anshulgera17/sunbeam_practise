#!/usr/bin/python
def main():
	d = { 'one': 1, 'two': 2, 'three': 3, 'four': 4, 'five': 5}
#	print(d)
#	for k in d:
	for k in sorted(d.keys()):
		print(k, d[k])
if __name__ == "__main__": main()
