#include<stdio.h>
namespace NA
{
	int num1 = 10;
}
namespace NB
{
	int num2 = 20;
}
int main( void )
{
	printf("Num1	:	%d\n",NA::num1);	//10
	printf("Num2	:	%d\n",NB::num2);	//20
	return 0;
}

