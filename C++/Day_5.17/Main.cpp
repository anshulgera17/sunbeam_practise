#include<iostream>
using namespace std;
namespace NException
{
	class Exception
	{
	private:
		string message;
	public:
		Exception( const string message = "")
		{
			this->message = message;
		}
		string getMessage( void )const
		{
			return this->message;
		}
	};
}
using namespace NException;
namespace NComplex
{
	class Complex
	{
	private:
		int real;
		int imag;
	public:
		Complex( void )throw( )
		{
			this->real = 0;
			this->imag = 0;
		}
		int getReal( void )const throw( )
		{
			return this->real;
		}
		void setReal( const int real )throw( Exception )
		{
			if( real >= 0 )
				this->real = real;
			else
				throw Exception("Invalid real number");
		}
		int getImag( void )const throw( )
		{
			return this->imag;
		}
		void setImag( const int imag )throw( Exception )
		{
			if( imag >= 0 )
				this->imag = imag;
			else
				throw Exception("Invalid imag number");
		}
	};
}
using namespace NComplex;
void accept_record( Complex& c1 )
{
	int real;
	cout<<"Enter real number	:	";
	cin>>real;
	c1.setReal( real );

	int imag;
	cout<<"Enter imag number	:	";
	cin>>imag;
	c1.setImag( imag );
}
void print_record( Complex& c1 )
{
	cout<<"Real	:	"<<c1.getReal()<<endl;
	cout<<"Imag	:	"<<c1.getImag()<<endl;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Accept Record"<<endl;
	cout<<"2.Print Record"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	Complex c1;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		try
		{
			switch( choice )
			{
			case 1:
				::accept_record( c1 );
				break;
			case 2:
				::print_record( c1 );
				break;
			}
		}
		catch( Exception& ex )
		{
			cerr<<ex.getMessage()<<endl;
		}
	}
	return 0;
}
