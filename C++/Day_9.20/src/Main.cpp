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
	Complex( const Complex& other )
	{
		this->real = other.real;
		this->imag = other.imag;
	}
	Complex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	//Complex* const this = c2;
	Complex& operator=( const Complex& other )
	{
		if( this == &other )
			return *this;
		this->real = other.real;
		this->imag = other.imag;
		return *this;
	}
	friend ostream& operator<<(ostream& cout, Complex& other );
};
ostream& operator<<(ostream& cout, Complex& other )
{
	cout<<"Real Number	:	"<<other.real<<endl;
	cout<<"Imag Number	:	"<<other.imag<<endl;
	return cout;
}
int main( void )
{
	Complex c1( 10, 20 );
	Complex c2;
	Complex c3;

	//c3 = c2 = c1;	//c3.operator =(c2.operator =(c1))

	cout<<c3;	//operator<<( cout, c3 );
	return 0;
}
