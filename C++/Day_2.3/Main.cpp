#include<stdio.h>
namespace NA
{
	int num1 = 10;
}
namespace NB
{
	int num1 = 20;
}
int main( void )
{
	printf("Num1	:	%d\n",NA::num1);	//10
	printf("Num1	:	%d\n",NB::num1);	//20
	return 0;
}

