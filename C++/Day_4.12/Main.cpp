#include<iostream>
using namespace std;

class Test
{
private:
	const int num1;
	int num2;
	mutable int count;
public:
	//Test* const this = &t;
	Test( void ) : num1( 10 ), num2( 20 ) , count( 0 )
	{
		//this->num1 = 10;	//Not Allowed
		//this->num2 = 30;	//Allowed
		//++ this->count;	//Allowed
	}

	//Test* const this = &t
	void showRecord( void )
	{
		//++ this->num1;	//Not Allowed
		cout<<"Num1	:	"<<this->num1<<endl;

		++ this->num2;	//Allowed
		cout<<"Num2	:	"<<this->num2<<endl;

		//++ this->count;	//Allowed
		//cout<<"Count	:	"<<this->count<<endl;
	}
	//const Test* const this = &t
	void printRecord( void )const
	{
		//++ this->num1;	//Not Allowed
		cout<<"Num1	:	"<<this->num1<<endl;
		//++ this->num2;	//Not Allowed
		cout<<"Num2	:	"<<this->num2<<endl;

		++ this->count;
		cout<<"Count	:	"<<this->count<<endl;
	}
};
int main( void )
{
	const Test t1;
	//t1.showRecord();	//Not Allowed
	t1.printRecord();

	return 0;
}
