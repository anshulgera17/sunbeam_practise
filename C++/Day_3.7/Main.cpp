#include<iostream>
#include<new>
using namespace std;
int main( void )
{
	int* ptr = new int;
	//int* ptr = ( int* ) ::operator new( sizeof( int ) * 1 );

	*ptr = 10;	//Dereferencing

	cout<<"Number	:	"<<*ptr<<endl;

	delete ptr;
	//::operator delete( ptr );

	ptr = NULL;
	return 0;
}


