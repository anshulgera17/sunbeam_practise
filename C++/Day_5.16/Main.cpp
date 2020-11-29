#include<new>
#include<iostream>
using namespace std;

#include"../include/Exception.h"
using namespace NException;

#include"../include/Math.h"

void accept_record( int& number )
{
	cout<<"Enter number	:	";
	cin>>number;
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
