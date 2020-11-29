#include<stdio.h>
namespace NA
{
	int num1 = 10;
}
using namespace NA;
void show_record( void )
{
	//using namespace NA;
	printf("Num1	:	%d\n", num1);
}
void print_record( void )
{
	//using namespace NA;
	printf("Num1	:	%d\n", num1);
}
int main( void )
{
	show_record();

	print_record();
	return 0;
}

