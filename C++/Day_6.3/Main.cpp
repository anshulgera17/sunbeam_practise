#include<iostream>
using namespace std;
int main( void )
{
	extern int num1;
	cout<<"Num1	:	"<<num1<<endl;

	//extern int num2;
	//cout<<"Num2	:	"<<num2<<endl;	//Not Allowed
	return 0;
}
