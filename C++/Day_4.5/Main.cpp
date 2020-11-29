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
		this->real = 10;
		this->imag = 20;
	}
	Complex( int real = 0, int imag = 0 )
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
	/*Complex c1(10,20);
	c1.printRecord();	//10, 20*/

/*
	Complex c2( 30 );
	c2.printRecord();	//30 0
*/

	Complex c3;
	c3.printRecord();

	return 0;
}
