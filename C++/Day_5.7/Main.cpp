#include<iostream>
using namespace std;

inline int max( int num1, int num2 )
{
	return num1 > num2 ? num1 : num2;
}
int main( void )
{
	int result = max( 10, 20 );
	//int result = 10 > 20 ? 10 : 20;

	cout<<"Result	:	"<<result<<endl;
	return 0;
}
