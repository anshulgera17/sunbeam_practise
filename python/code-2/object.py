#!/usr/bin/python
class Egg:
	def __init__(self, kind = "fried"):
		self.kind = kind
	def whatkind(self):
		return self.kind

def main():
	fried = Egg()
	scrambled = Egg('scrambled')
	print(scrambled.whatkind())

if __name__ == "__main__" : main()
