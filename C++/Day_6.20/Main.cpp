#include<iostream>
using namespace std;

int main( void )
{
	class Complex	//Local class
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
	Complex c1;
	c1.printRecord();
	return 0;
}
