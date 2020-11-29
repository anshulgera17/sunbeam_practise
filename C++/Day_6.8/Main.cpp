#include<iostream>
using namespace std;
class Singleton
{
private:
	int num1;
private:
	Singleton( void )
	{
		cout<<"Inside ctor"<<endl;
		this->num1 = 0;
	}
	Singleton( const Singleton& other )
	{
		this->num1 = other.num1;
	}
public:
	int getNum1() const
	{
		return num1;
	}
	void setNum1( const int num1)
	{
		this->num1 = num1;
	}
	static Singleton& getInstance( void )
	{
		static Singleton s1;
		return s1;
	}
};
int main( void )
{
	Singleton& s1 = Singleton::getInstance();

	s1.setNum1(10);

	cout<<"Num1	:	"<<s1.getNum1()<<endl;
	return 0;
}


