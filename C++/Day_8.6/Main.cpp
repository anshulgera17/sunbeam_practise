#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main( void )
{
/*
	int number = 10;
	size_t size = sizeof( number );
	cout<<"Size	:	"<<size<<endl;	//4
*/

	int number = 10;

	const type_info& type = typeid( number );

	string typeName = type.name();

	cout<<"Type	:	"<<typeName<<endl;

	return 0;
}
