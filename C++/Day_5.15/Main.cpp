#include<iostream>
using namespace std;

#include"../include/Exception.h"
using namespace NException;

void accept_record( int& number )
{
	cout<<"Enter number	:	";
	cin>>number;
}
int calculate( int num1, int num2 )
{
	if( num2 == 0 )
		throw  Exception("Divide by zero exception", __FILE__, __LINE__ );
	return num1 / num2;
}
void print_record( const int& result )
{
	cout<<"Result	:	"<<result<<endl;
}
int main( void )
{
	try
	{
		int num1;
		::accept_record( num1 );

		int num2;
		::accept_record( num2 );

		int result = ::calculate(num1, num2 );
		::print_record( result );
	}
	catch ( string& ex)
	{
		cout<<ex<<endl;
	}
	catch( Exception& ex)
	{
		ex.printStackTrace();
	}
	catch(...)
	{
		cout<<"Generic catch"<<endl;
	}
	return 0;
}
