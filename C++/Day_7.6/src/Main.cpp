#include<iostream>
using namespace std;

class A
{
private:
	int num1;
public:
	A( void )
	{
		this->num1 = 10;
	}
private:
	void printRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
	}
	friend class B;
};
class B :  public A
{
public:
	void printRecord()
	{
		A::printRecord();	//Valid
	}
};
class C :  public A
{
public:
	void printRecord()
	{
		//A::printRecord();	//Not Valid
	}
};
int main( void )
{
	B b;
	b.printRecord();

	C c;
	c.printRecord();
	return 0;
}
