#!/usr/bin/python
class Duck:
	def __init__(self, value):
		self._v = value
	def quack(self):
		print('Quack!', self._v)
	def walk(self):
		print("walk like a duck!", self._v)
	

def main():
	dau = Duck(45)
	dadda = Duck(65)
	dau.quack()
	dau.walk()
	dadda.quack()
	dadda.walk()

if __name__ == "__main__": main()

