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
	void operator+=( Complex& other )
	{
		this->real += other.real;
		this->imag += other.imag;
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

	c1 += c2;	//c1.operator+=( c2 );

	c1.printRecord();
	return 0;
}
