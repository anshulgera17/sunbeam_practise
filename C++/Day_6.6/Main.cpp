#include<iostream>
using namespace std;
class Test
{
private:
	const static int num1;
public:
	static int getNum1( void )
	{
		return  Test::num1;
	}
};
const int Test::num1 = 10;
int main( void )
{
	cout<<"Num1	:	"<<Test::getNum1()<<endl;
	return 0;
}

