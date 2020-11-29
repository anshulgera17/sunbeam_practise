#include<iostream>
#include<typeinfo>
using namespace std;

class Base
{
public:
	virtual void print( void )
	{
		cout<<"Base::print"<<endl;
	}
};
class Derived : public Base
{
public:
	void print( void )
	{
		cout<<"Derived::print"<<endl;
	}
};
int main( void )
{
	Base* ptrBase = NULL;
	cout<<"Name	:	"<<typeid( ptrBase ).name()<<endl;	//P4Base
	cout<<"Name	:	"<<typeid( *ptrBase ).name()<<endl;	//7Derived
	return 0;
}
