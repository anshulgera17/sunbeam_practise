#include<iostream>
using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	Complex( int real = 0, int imag = 0 );

	void printRecord( void );
};
Complex::Complex( int real, int imag )
{
	this->real = real;
	this->imag = imag;
}
void Complex::printRecord( void )
{
	cout<<"Real	:	"<<this->real<<endl;
	cout<<"Imag	:	"<<this->imag<<endl;
}
int main( void )
{
	Complex c1( 10, 20 );
	c1.printRecord();

	Complex c2( 30 );
	c2.printRecord();

	Complex c3;
	c3.printRecord();

	return 0;
}
