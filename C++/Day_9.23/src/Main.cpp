#include<cstring>
#include<iostream>
#include<string>
using namespace std;

class Array
{
private:
	size_t size;
	int* arr;
public:
	Array( void )
	{
		this->size = 0;
		this->arr = NULL;
	}
	Array( size_t size )
	{
		this->size = size;
		this->arr = new int[ this->size ];
	}
	Array( const Array& other )
	{
		this->size = other.size;
		this->arr = new int[ this->size ];
		memcpy(this->arr, other.arr, sizeof( int ) * this->size );
	}
	Array& operator=( const Array& other )
	{
		if( this == &other)
			return *this;
		this->~Array();
		this->size = other.size;
		this->arr = new int[ this->size ];
		memcpy(this->arr, other.arr, sizeof( int ) * this->size );
		return *this;
	}
	int& operator[]( int index )throw( string )
	{
		if( index >=0 && index < 5 )
			return this->arr[ index ];
		throw string("Array index out of bounds exception");
	}
	~Array( void )
	{
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

	a1[ 2 ] = 300;
	//a1.operator []( 2 ) = 300;
	//30 = 300;
	int element = a1[ 2 ];	//int element =a1.operator[]( 2 );
	cout<<element<<endl;

	return 0;
}
