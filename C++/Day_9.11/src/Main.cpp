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
	//Pre-Increment
	Complex  operator++( void )
	{
		Complex temp;
		temp.real = ++ this->real;
		temp.imag = ++ this->imag;
		return temp;
	}
	//Post-Increment
	Complex  operator++( int )
	{
		Complex temp;
		temp.real = this->real ++;
		temp.imag = this->imag ++;
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

	Complex c2 = ++ c1;	//Complex c2 = c1.operator++( )

	//Complex c2 = c1 ++;	//Complex c2 = c1.operator++( 0 )

	c1.printRecord();
	c2.printRecord();
	return 0;
}
