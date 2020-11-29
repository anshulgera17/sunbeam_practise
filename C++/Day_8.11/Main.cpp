#include<iostream>
using namespace std;
class Test
{
private:
	int num1;
public:
	Test( void )
	{
		this->num1 = 10;
	}
	//Test* const this;
	void showRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
	}
	//const Test* const this;
	void printRecord( void )const
	{
		//Test* const ptr = (Test* const)this;
		Test* const ptr = const_cast<Test* const>(this);
		ptr->showRecord();
	}
};
int main( void )
{
	const Test t;

	t.printRecord();
	return 0;
}
