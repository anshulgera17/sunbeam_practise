#include<iostream>
using namespace std;

/*void swap_object( int num1, int num2 )
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}*/
/*void swap_object( int* const num1, int* const num2 )
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}*/
//void swap_object( int* const num1, int* const num2 )
void swap_object( int& num1, int& num2 )
{
	int temp = num1;	//int temp = *num1;
	num1 = num2;		//*num1 = *num2;
	num2 = temp;		//*num2 = temp;
}
int main( void )
{
	int num1 = 10;
	int num2 = 20;

	swap_object( num1, num2 );

	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	return 0;
}
