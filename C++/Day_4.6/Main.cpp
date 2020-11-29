#include<iostream>
using namespace std;

class Array
{
private:
	size_t size;
	int* arr;
public:
	Array( void )
	{
		cout<<this<<endl;
		this->size = 0;
		this->arr = NULL;
	}
	Array( size_t size )
	{
		this->size = size;
		this->arr = new int[ size ];
	}
	//Array* const this = &a1
	void acceptRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
		{
			cout<<"Enter number	:	";
			cin>>this->arr[ index ];
		}
	}
	//Array* const this = &a1
	void printRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
	~Array( )
	{
		cout<<this<<endl;
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
int main( void )
{
	Array a1( 3 );

	a1.acceptRecord();

	a1.printRecord();

	return 0;
}
