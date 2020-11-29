#include<iostream>
using namespace std;
class Outer
{
public:
	class Inner		//Nested class
	{
	private:
		int num1;
		static int num2;
	public:
		Inner( void )
		{
			this->num1 = 10;
		}
		friend class Outer;
	};
	void printRecord( void )
	{
		Inner in;
		cout<<"Num1	:	"<<in.num1<<endl;
		cout<<"Num2	:	"<<Inner::num2<<endl;
	}
};
int Outer::Inner::num2 = 20;
int main( void )
{
	Outer out;
	out.printRecord();
	return 0;
}
