#include<iostream>
using namespace std;
int x;
void print(void )
{
	static int count = 10;
	++ count;
	cout<<"Count	:	"<<count<<endl;
}
int main( void )
{
	::print();	//11
	::print();	//12
	::print();	//13
	return 0;
}
