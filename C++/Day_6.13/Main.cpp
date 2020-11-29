#include<iostream>
using namespace std;

namespace NA
{
	class A
	{
	private:
		int num1;
		int num2;
	public:
		A( void )
		{
			this->num1 = 10;
			this->num2 = 20;
		}
		friend void sum( void );
	};
	void sum( void )
	{
		A a;
		int result = a.num1 + a.num2;
		cout<<"Result	:	"<<result<<endl;
	}
}

int main( void )
{
	NA::sum( );
	return 0;
}
