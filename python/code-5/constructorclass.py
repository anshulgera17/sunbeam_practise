#!/usr/bin/python
class Duck:
	def __init__(self):
		print('constructor')
	def quack(self):
		print('Quack!')
	def walk(self):
		print("walk like a duck!")
	

def main():
	dau = Duck()
	dau.quack()
	dau.walk()

if __name__ == "__main__": main()

