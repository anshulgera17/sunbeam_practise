#include<iostream>
using namespace std;

class A
{
private:
	int* p1;
public:
	A( void )
	{
		cout<<"Base class ctor"<<endl;
		this->p1 = new int[ 3 ];
	}
	virtual ~A( void )
	{
		cout<<"Base class dtor"<<endl;
		delete[] this->p1;
	}
};
class B : public A
{
private:
	int* p2;
public:
	B( void )
	{
		cout<<"Derived class ctor"<<endl;
		this->p2 = new int[ 3 ];
	}
	~B( void )
	{
		cout<<"Derived class dtor"<<endl;
		delete[] this->p2;
	}
};
int main( void )
{
	A* ptr = new B();

	delete ptr;

	return 0;
}
/*int main( void )
{
	B* ptr = new B();

	delete ptr;

	return 0;
}*/
/*int main( void )
{
	B obj;

	return 0;
}*/
/*int main( void )
{
	A* ptr = new A();

	delete ptr;

	return 0;
}*/
/*int main( void )
{
	A obj;
	return 0;
}*/
