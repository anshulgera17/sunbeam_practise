#include<iostream>
using namespace std;
void print(void )
{
	int count = 10;
	++ count;
	cout<<"Count	:	"<<count<<endl;
}
int main( void )
{
	::print();	//11
	::print();	//11
	::print();	//11
	return 0;
}
