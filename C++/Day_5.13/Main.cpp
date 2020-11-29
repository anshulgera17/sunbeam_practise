#include<iostream>
#include<string>
using namespace std;

void accept_record( int& number )
{
	cout<<"Enter number	:	";
	cin>>number;
}
int main( void )
{
	try
	{
		int num1;
		::accept_record( num1 );

		int num2;
		::accept_record( num2 );

		if( num2 == 0 )
			throw string("Divide by zero exception");
		int result = num1 / num2;
		cout<<"Result	:	"<<result<<endl;
	}
	catch ( string& ex)
	{
		cout<<ex<<endl;
	}
	return 0;
}
