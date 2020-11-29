#include<iostream>
using namespace std;

class B
{
public:
	void sum( void );
	void sub( void );
	void multiplication( void );
};
class A
{
private:
	int num1;
	int num2;
public:
	A( void );

	friend void B::sum( void );

	friend void B::sub( void );

	friend void B::multiplication( void );
};
A::A( void )
{
	this->num1 = 10;
	this->num2 = 20;
}
void B::sum( void )
{
	A obj;
	int result = obj.num1 + obj.num2;
	cout<<"Result	:	"<<result<<endl;
}
void B::sub( void )
{
	A obj;
	int result = obj.num1 - obj.num2;
	cout<<"Result	:	"<<result<<endl;
}
void B::multiplication( void )
{
	A obj;
	int result = obj.num1 * obj.num2;
	cout<<"Result	:	"<<result<<endl;
}
int main( void )
{
	B obj;

	obj.sum();

	obj.sub();

	obj.multiplication();
	return 0;
}
