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
	cout<<"Open File"<<endl;
	int num1;
	::accept_record( num1 );

	LABEL:
	int num2;
	::accept_record( num2 );

	try
	{
		if( num2 == 0 )
		{
			string ex("Divide by zero exception");
			throw ex;
		}
		else
		{
			int result = num1 / num2;
			cout<<"Result	:	"<<result<<endl;
		}
	}
	catch ( string ex)
	{
		cout<<ex<<endl;
		goto LABEL;
	}
	cout<<"Close File"<<endl;
	return 0;
}
