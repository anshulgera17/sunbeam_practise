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
	Complex operator+( const int value )
	{
		Complex temp;
		temp.real = this->real + value;
		temp.imag = this->imag + value;
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

	Complex c2 = c1 + 5;	//c2 = c1.operator+( 5 );

	c2.printRecord();

	return 0;
}
