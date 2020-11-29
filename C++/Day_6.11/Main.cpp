#include<iostream>
using namespace std;
class Test
{
private:
	int num1;
protected:
	int num2;
public:
	Test( void )
	{
		this->num1 = 10;
		this->num2 = 20;
	}
	friend void sum( void );
};
void sum( void )
{
	Test t;
	int result = t.num1 + t.num2;
	cout<<"Result	:	"<<result<<endl;
}
int main( void )
{
	sum( );
	return 0;
}

