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
	//Complex* const this = &c1;
	//Complex& other = c2
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

	Complex c3;

	c3 = c1 + c2;	//c3 = c1.operator+( c2 );

	c3.printRecord();

	return 0;
}



