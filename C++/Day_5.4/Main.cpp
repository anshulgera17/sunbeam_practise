#include<iostream>
using namespace std;
void print( int num1 )
{
	cout<<"int	:	"<<num1<<endl;
}
void print( int& num1 )
{
	cout<<"int&	:	"<<num1<<endl;
}
int main( void )
{
	//::print( 10 );	//int	:	10

	int num1 = 10;
	//::print( num1 );	//Ambiguity Error

	return 0;
}
