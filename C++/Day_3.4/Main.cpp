#include<iostream>
using namespace std;

void sum( unsigned int num1 )
{
	cout<<"Num1	:	"<<num1<<endl;
}
void sum( signed int num2 )
{
	cout<<"Num2	:	"<<num2<<endl;
}
int main( void )
{
	unsigned int number = 10;
	sum( number );
	sum( -20);
	return 0;
}
