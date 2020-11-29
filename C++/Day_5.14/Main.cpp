#include<iostream>
#include<string>
using namespace std;

class Exception
{
private:
	string message;
	string fileName;
	int lineNumber;
public:
	Exception( const string message = 0, const string fileName = 0, const int lineNumber = 0  )
	{
		this->message = message;
		this->fileName = fileName;
		this->lineNumber = lineNumber;
	}
	void printStackTrace( void )const
	{
		cerr<<"Exception : "<<this->message<<endl;
		cerr<<"In file "<<this->fileName<<" ";
		cerr<<"at "<<this->lineNumber<<endl;
	}
};
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
			throw  Exception("Divide by zero exception", __FILE__, __LINE__ );
		int result = num1 / num2;
		cout<<"Result	:	"<<result<<endl;
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
