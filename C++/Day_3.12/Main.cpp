#include<iostream>
#include<new>
using namespace std;
/*void* operator new[]( size_t size, nothrow_t nothrow )
{
	void* ptr = NULL;
	try
	{
		ptr = new int[ size ];
	}
	catch (bad_alloc e)
	{
		ptr = NULL;
	}
	return NULL;
}*/
int main( void )
{
	try
	{
		int count = 1000000000000;
		int* ptr = new (nothrow) int[ count ];
		//int* ptr = ( int* ) ::operator new[]( sizeof(int)* count, nothrow );

		if( ptr == NULL )
			cout<<"<NULL>"<<endl;
		else
		{	}
	}
	catch (bad_alloc e)
	{
		cout<<e.what()<<endl;
	}
	//Output : NULL
	return 0;
}




