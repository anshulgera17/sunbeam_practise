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
	void printRecord( void )
	{
		cout<<"Real	:	"<<this->real<<endl;
		cout<<"Imag	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1;
	c1.printRecord();

	Complex* ptrComplex = &c1;
	//int* ptr = ( int* )ptrComplex;	//C-Style
	int* ptr = reinterpret_cast<int*>( ptrComplex );
	*ptr = 500;
	ptr = ptr + 1;
	*ptr = 600;
	c1.printRecord();
	return 0;
}
