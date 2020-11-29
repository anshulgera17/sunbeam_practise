#!/usr/bin/python
class Duck:
	def __init__(self, color = 'white'):
		self._color = color

	def quack(self):
		print("Qucakk!")

	def walk(self):
		print("walk like a duck!")

def main():
	dau = Duck()
	print(dau._color)
	dau.color = 'Red'
	print(dau.color)
if __name__ == "__main__":main()
