#include<stdio.h>
namespace NA
{
	int num1 = 10;
}
int main( void )
{
	int num1 = 20;
	using namespace NA;
	printf("Num1	:	%d\n",num1);	//20

	return 0;
}

