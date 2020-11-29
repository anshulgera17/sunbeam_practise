#include<iostream>
#include<new>
using namespace std;
int main( void )
{
	int** ptr = new int*[ 2 ];
	for( int index = 0 ; index < 2; ++ index )
		ptr[ index ] = new int[ 3 ];

	//TODO:  Input and Output

	for( int index = 0 ; index < 2; ++ index )
		delete[] ptr[ index ];

	delete[] ptr;
	ptr = NULL;
	return 0;
}




