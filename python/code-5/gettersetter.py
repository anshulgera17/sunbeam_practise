#!/usr/bin/python
class Duck:
	def __init__(self, color = 'white'):
		self._color = color

	def quack(self):
		print("Qucakk!")

	def walk(self):
		print("walk like a duck!")
	
	def set_color(self, color):
		self._color = color

	def get_color(self):
		return self._color

def main():
	dau = Duck()
	print(dau.get_color())
	dau.set_color('black')
	
	print(dau.get_color())
if __name__ == "__main__":main()
