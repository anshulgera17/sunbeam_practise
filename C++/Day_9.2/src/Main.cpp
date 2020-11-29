#include<iostream>
#include<string>
using namespace std;

template< class X, class Y>
void swap_object( X& num1, Y& num2 )
{
	X temp = num1;
	num1 = num2;
	num2 = temp;
}
int main( void )
{
	float  num3 = 10.1f;
	double num4 = 20.2;

	swap_object<float,double>( num3, num4 );

	cout<<"Num3	:	"<<num3<<endl;
	cout<<"Num4	:	"<<num4<<endl;

	return 0;
}
