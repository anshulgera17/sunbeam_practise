#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void fun()
{
	static int i = 1;
	printf("%d\n", ++i);
}

int main(void)
{
	printf("main : %d\n", a);
//	printf("main : %d\n", i);
	fun1();
	fun();
	fun();
	fun();
	return 0;
}

