#include<iostream>
#include<new>
using namespace std;
int main( void )
{
	try
	{
		int count = 1000000000000;
		int* ptr = new int[ count ];
	}
	catch (bad_alloc e)
	{
		cout<<e.what()<<endl;
	}
	return 0;
}




