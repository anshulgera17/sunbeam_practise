#include<iostream>
using namespace std;
class Outer
{
private:
	int num1;
	static int num2;
public:
	Outer( void )
	{
		this->num1 = 10;
	}
public:
	class Inner		//Nested class
	{
	public:
		void printRecord( void )
		{
			Outer out;
			cout<<"Num1	:	"<<out.num1<<endl;
			cout<<"Num2	:	"<<num2<<endl;
		}
	};
};
int Outer::num2 = 20;
int main( void )
{
	Outer::Inner in;
	in.printRecord();
	return 0;
}
