#include<iostream>
using namespace std;
class A
{
private:
	A( void )
	{

	}
	friend class B;
};
class B :virtual  public A
{
public:
	B( void )
	{

	}
};
class C : public B
{
public:
	C()
	{

	}
};
int main( void )
{
	C obj;
	return 0;
}
