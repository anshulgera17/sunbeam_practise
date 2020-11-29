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
	Complex& operator=( const Complex& other )
	{
		if( this == &other )
			return *this;
		this->real = other.real;
		this->imag = other.imag;
		return *this;
	}
	Complex operator++( void )
	{
		Complex temp;
		temp.real = ++ this->real;
		temp.imag = ++ this->imag;
		return temp;
	}
	Complex operator++( int value )
	{
		Complex temp;
		temp.real =  this->real ++;
		temp.imag =  this->imag;
		return temp;
	}
	friend ostream& operator<<( ostream& cout, Complex& other )
	{
		cout<<"Real	:	"<<other.real<<endl;
		cout<<"Imag	:	"<<other.imag<<endl;
		return cout;
	}
};
int main( void )
{
	Complex c1(10,20);
	Complex c2;

	c2 = c1;	//c2.operator=( c1 );

	cout<<c2<<endl;
	return 0;
}
/*
int main( void )
{
	Complex c1(10,20);
	Complex c2 = ++ c1;	//Complex c2 = c1.operator++( );

	cout<<c1<<endl;	//operator<<( cout, c1 )<<endl;
	cout<<c2<<endl; //operator<<( cout, c1 )<<endl;


	Complex c3(50,60);
	Complex c4 = c3 ++;	//Complex c4 = c3.operator++( 0 )
	cout<<c3<<endl;
	cout<<c4<<endl;
	return 0;
}
*/
