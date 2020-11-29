#include<iostream>
using namespace std;

int main( void )
{
	double num1 = 10.5;

	//int num2 = ( int )num1;
	int num2 = static_cast< int >( num1 );

	cout<<"Num2	:	"<<num2<<endl;

	return 0;
}
