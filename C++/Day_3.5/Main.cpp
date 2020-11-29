#include<iostream>
using namespace std;

void print( int num1 )
{
	cout<<"int	:	"<<num1<<endl;
}
void print( float num2 )
{
	cout<<"float	:	"<<num2<<endl;
}
int main( void )
{
	//print( 10 );	//int  : 10

	//print( 10.5 );	//Ambiguity Error

	//print( ( int )10.5 );	//int : 10

	// print( 10.5f );	//int : 10

	return 0;
}
