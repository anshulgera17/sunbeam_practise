#include<cstdlib>
#include<iostream>
using namespace std;
class Complex
{
public:
	Complex( void )
	{
		cout<<"Inside ctor"<<endl;
	}
	~Complex( void )
	{
		cout<<"Inside dtor"<<endl;
	}
};
int main( void )
{
	//Complex* c1 = new Complex;

	/*Complex* c1 = new Complex();	//ctor will call

	delete c1;	//dtor will call*/


	Complex* ptr = ( Complex* )malloc( sizeof( Complex) * 1 );

	free( ptr );
	return 0;
}
