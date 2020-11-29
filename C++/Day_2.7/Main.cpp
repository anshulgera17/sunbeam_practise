#include<stdio.h>


int num1 = 10;
namespace NA
{
	int num2 = 20;
	namespace NB	//Nested namespace
	{
		int num3 = 30;
	}
}
int main( void )
{
	printf("Num1	:	%d\n", ::num1);	//10
	printf("Num2	:	%d\n", NA::num2);		//20
	printf("Num3	:	%d\n", NA::NB::num3);	//30
	return 0;
}

