#include<iostream>
using namespace std;

class B;	//Forward declaration

class A
{
private:
	int num1;
public:
	void showRecord( void );
	//friend void B::displayRecord( void );
	friend class B;
};
class B
{
private:
	int num2;
public:
	void displayRecord( void );
	//friend void A::showRecord( void );
	friend class A;
};
void A::showRecord( void )
{
	B obj;
	obj.num2 = 10;
	cout<<"Num2	:	"<<obj.num2<<endl;
}
void B::displayRecord( void )
{
	A obj;
	obj.num1 = 20;
	cout<<"Num1	:	"<<obj.num1<<endl;
}
int main( void )
{
	A obj1;
	obj1.showRecord();

	B obj2;
	obj2.displayRecord();
	return 0;
}
