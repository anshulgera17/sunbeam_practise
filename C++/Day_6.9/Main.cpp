#include<iostream>
using namespace std;

class
{
public:
	void f1( void )
	{
		cout<<"Inside f1"<<endl;
	}
	static void f2( void )
	{
		cout<<"Inside f2"<<endl;
	}
}obj;
int main( void )
{
	obj.f1();

	obj.f2();
	return 0;
}

