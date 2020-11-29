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
	Complex operator+( Complex& other )
	{
		Complex temp;
		temp.real = this->real + other.real;
		temp.imag = this->imag + other.imag;
		return temp;
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

	Complex c3( 50, 60 );

	Complex c4;

	c4 = c1 + c2 + c3;//c4 = c1.operator +(c2).operator+( c3 );

	c4.printRecord();
	return 0;
}
