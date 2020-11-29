#include<iostream>
using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		this->real = 0;
		this->imag = 0;
	}
	Complex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	bool operator==( Complex& other )
	{
		if( this->real == other.real && this->imag == other.imag )
			return true;
		else
			return false;
	}
	bool operator!=( Complex& other )
	{
		if( this->real != other.real && this->imag != other.imag )
			return true;
		else
			return false;
	}
	void printRecord( void )
	{
		cout<<"Real	:	"<<this->real<<endl;
		cout<<"Imag	:	"<<this->imag<<endl;
	}
};
int main( void )
{

	Complex c1( 10, 20 );

	Complex c2( 30, 40 );

	cout<<(c1!=c2 ? "Not Equal" : "Equal")<<endl;


	/*Complex c1( 10, 20 );

	Complex c2( 10, 20 );

	cout<<(c1==c2 ? "Equal" : "Not Equal")<<endl;
*/
	/*if( c1 == c2 )
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;*/

/*	bool result = c1 == c2;	//bool result = c1.operator==( c2 );
	if( result )
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;*/

	/*bool result = c1 == c2;	//bool result = c1.operator==( c2 );
	if( result == true )
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;*/

	return 0;
}
