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
	Complex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	friend istream& operator>>( istream& in, Complex& other );
	friend ostream& operator<<( ostream& cout, Complex& other );
};
istream& operator>>( istream& cin, Complex& other )
{
	cout<<"Real	:	";
	cin>>other.real;
	cout<<"Imag	:	";
	cin>>other.imag;
	return cin;
}
ostream& operator<<( ostream& cout, Complex& other )
{
	cout<<"Real	:	"<<other.real<<endl;
	cout<<"Imag	:	"<<other.imag<<endl;
	return cout;
}
int main( void )
{
	Complex c1,c2;

	cin>> c1>>c2;	//operator>>( cin, c1 );

	cout<<c1<<c2;
	return 0;
}
/*int main( void )
{
	Complex c1;

	cin>> c1;	//operator>>( cin, c1 );

	cout<<c1;
	return 0;
}*/
/*int main( void )
{
	Complex c1( 10,20);

	Complex c2( 10,20);

	cout<<c1<<c2;
	//operator<<( operator<<(cout, c1), c2 );

	return 0;
}*/
