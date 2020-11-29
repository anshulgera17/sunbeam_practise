#include<iostream>
using namespace std;

void sum( int num1, int num2 )
{
	int result = num1 + num2;
	cout<<"Result	:	"<<result<<endl;
}
void sum( int num1, double num2 )
{
	double result = num1 + num2;
	cout<<"Result	:	"<<result<<endl;
}
int main( void )
{
	sum( 10, 20 );

	sum( 10, 20.2 );

	return 0;
}
