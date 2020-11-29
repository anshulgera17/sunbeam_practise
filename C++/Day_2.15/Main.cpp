#include<iostream>
using namespace std;

#include"../include/Student.h"
int main( void )
{
	using namespace NStudent;
	Student arr[ 3 ];

	for( int index = 0; index < 3; ++ index )
		arr[ index ].acceptRecord();

	for( int index = 0; index < 3; ++ index )
		arr[ index ].printRecord();

	/*char name[ 30 ];
	cout<<"Name	:	";
	cin.getline( name, '\n');
	cout<<name<<endl;*/
	return 0;
}
