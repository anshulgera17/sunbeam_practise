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
	void printRecord( void )
	{
		cout<<"Real	:	"<<this->real<<endl;
		cout<<"Imag	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1;
	Complex * ptr1 = new Complex();

	Complex c2(10, 20);
	Complex * ptr2 = new Complex(10,20);

	Complex arr1[ 3 ];
	Complex* ptr3 = new Complex[ 3 ];

	Complex arr2[ 3 ] = { Complex(10,20),Complex(30,40),Complex(50,60)};
	Complex** ptr4 = new Complex*[ 3 ];
	for( int index = 0; index < 3; ++ index )
	{
		ptr4[ index ] = new Complex( 10, 20 );
	}
	return 0;
}
