#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
/*	Complex( void ) : real( 10 ), imag( 20 )
	{	}*/
	Complex( int real = 0 , int imag = 0 ) : real( real ), imag( imag )
	{	}
	void printRecord( void )
	{
		cout<<"Real	:	"<<this->real<<endl;
		cout<<"Imag	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1(100,200);
	c1.printRecord();

	Complex c2(300);
	c2.printRecord();

	Complex c3;
	c3.printRecord();
	return 0;
}
