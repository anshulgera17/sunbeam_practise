#include<iostream>
using namespace std;
int main( void )
{
	char name[ 30 ];

	int* ptr = new ( name ) int( 125 );	//Placement new operator
	//int* ptr = ( int* ) ::operator new(sizeof( int), name );

	cout<<"Num1	:	"<<*ptr<<endl;

	//delete ptr; //Invalid

	return 0;
}




