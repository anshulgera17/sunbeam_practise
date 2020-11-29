#include<iostream>
#include<string>
using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		cout<<"Complex( void )"<<endl;
		this->real = 0;
		this->imag = 0;
	}
	Complex( int value )
	{
		cout<<"Complex( int value )"<<endl;
		this->real = value;
		this->imag = value;
	}
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
		this->real = real;
		this->imag = imag;
	}
	void printRecord( void )
	{
		cout<<"Real	:	"<<this->real<<endl;
		cout<<"Imag	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	//Complex c1;	//Complex( void )

	//Complex c2(10);	//Complex( int value )

	//Complex c3(10,20);	//Complex( int real, int imag )

	//Complex c4( );	//It is declaration of c4 function : No ctor will call

	//Complex c5 = 10;	//Complex( int value )
	//Complex c5 ( 10 );

	//Complex c6 = 10 , 20;	//Error : we can not declare const
	//Complex c6 ( 10 ) , 20;

	//Complex c6= ( 10 , 20 );	//Complex( int value )
	//Complex c6 = ( 20 );
	//Complex c6( 20 );


	//Complex( 10, 20 );	//Complex( int real, int imag )
	//Complex( 10, 20 ).printRecord();

	//Complex* ptr;	// ctor will not call

	//Complex& c1; // ctor will not call


	//Complex c7 = { 10, 20 };	//Since class Complex is not aggregate type it is error
	//c7.printRecord();

	return 0;
}
