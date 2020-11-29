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
	friend Complex operator+( Complex& c1, Complex& c2 );
};
Complex operator+( Complex& c1, Complex& c2 )
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
int main( void )
{
	Complex c1( 10, 20 );

	Complex c2( 30, 40 );

	Complex c3;

	c3 = c1 + c2;	//c3 = operator+( c1, c2 );

	c3.printRecord();

	return 0;
}
