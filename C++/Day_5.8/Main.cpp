#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void );

	Complex( int real, int imag );

	void printRecord( void );

};
inline Complex::Complex( void )
{
	this->real = 0;
	this->imag = 0;
}
inline Complex::Complex( int real, int imag )
{
	this->real = real;
	this->imag = imag;
}
inline void Complex::printRecord( void )
{
	cout<<"Real	:	"<<this->real<<endl;
	cout<<"Real	:	"<<this->imag<<endl;
}
int main( void )
{
	Complex c1(10,20);
	c1.printRecord();
	return 0;
}
