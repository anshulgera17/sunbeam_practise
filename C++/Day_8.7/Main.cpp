#include<iostream>
#include<typeinfo>
using namespace std;

class Base
{
public:
	void print( void )
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
	Base* ptrBase = new Derived();
	cout<<"Name	:	"<<typeid( ptrBase ).name()<<endl;	//P4Base
	cout<<"Name	:	"<<typeid( *ptrBase ).name()<<endl;	//4Base

	return 0;
}
/*int main( void )
{
	Derived* ptrDerived = new Derived();
	cout<<"Name	:	"<<typeid( ptrDerived ).name()<<endl;	//P7Derived
	cout<<"Name	:	"<<typeid( *ptrDerived ).name()<<endl;	//7Derived
	return 0;
}*/
/*int main( void )
{
	Derived derived;
	cout<<"Name	:	"<<typeid( derived ).name()<<endl;	//7Derived
	return 0;
}*/
/*int main( void )
{
	Base* ptrBase = new Base();
	cout<<"Name	:	"<<typeid( ptrBase ).name()<<endl;	//P4Base
	cout<<"Name	:	"<<typeid( *ptrBase ).name()<<endl;	//4Base
	return 0;
}*/
/*int main( void )
{
	Base base;
	cout<<"Name	:	"<<typeid( base ).name()<<endl;	//4Base
	return 0;
}*/
