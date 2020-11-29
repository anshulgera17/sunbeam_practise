#include<stdio.h>


int num1 = 10;
int main( void )
{
	int num1 = 20;
	printf("Num1	:	%d\n", ::num1);	//10
	printf("Num1	:	%d\n", num1);	//20
	return 0;
}

