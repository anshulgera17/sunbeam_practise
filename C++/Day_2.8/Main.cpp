#include<stdio.h>


int num1 = 10;
namespace NA
{
	int num1 = 20;
	namespace NB	//Nested namespace
	{
		int num1 = 30;
	}
}
int main( void )
{
	printf("Num1	:	%d\n", ::num1);	//10
	printf("Num2	:	%d\n", NA::num1);		//20
	printf("Num3	:	%d\n", NA::NB::num1);	//30
	return 0;
}

