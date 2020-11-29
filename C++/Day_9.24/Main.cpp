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
	explicit Complex( int value )
	{
		this->real = value;
		this->imag = value;
	}
	Complex( const int real, const int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	void operator()( const int real, const int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	operator int()
	{
		return this->real;
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
/*	int number = 10;
	Complex c1 = number;
	//Complex c1 (  number );
	cout<<c1<<endl;*/

/*	int number = 10;

	Complex c1;

	c1 = (Complex)number;	//c1 = Complex(number);
	//c1.operator=( Complex( number ) );

	cout<<c1<<endl;*/


	Complex c1(100,200);
	int value = c1;
	//int value = c1.operator int();
	cout<<"Value	:	"<<value<<endl;
	return 0;
}
