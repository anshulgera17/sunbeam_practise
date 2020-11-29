#include<iostream>
using namespace std;
namespace NArray
{
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
			for( int index = 0; index < this->size; ++ index )
				this->arr[ index ] = other.arr[ index ];
		}
		Array& operator=( const Array& other )
		{
			if( this == &other )
				return *this;
			this->~Array();
			this->size = other.size;
			this->arr = new int[ this->size ];
			for( int index = 0; index < this->size; ++ index )
				this->arr[ index ] = other.arr[ index ];
			return *this;
		}
		~Array( void )
		{
			if( this->arr != NULL )
			{
				delete[] this->arr;
				this->arr = NULL;
			}
		}
		friend istream& operator>>( istream& cin, Array& other )
		{
			for( int index = 0; index < other.size; ++ index )
			{
				cout<<"Enter number	:	";
				cin>>other.arr[ index ];
			}
			return cin;
		}
		friend ostream& operator<<( ostream& cout, Array& other )
		{
			for( int index = 0; index < other.size; ++ index )
			{
				cout<<other.arr[ index ]<<endl;
			}
			return cout;
		}
	};
}
int main( void )
{
	using namespace NArray;
	Array a1( 3 );
	cin>>a1;

	Array a2(2);

	a2 = a1;	//a2.operator=( a1 )

	cout<<a2;
	return 0;
}

