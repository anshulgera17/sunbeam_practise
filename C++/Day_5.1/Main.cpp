#include<iostream>
using namespace std;

class Matrix
{
private:
	int row;
	int col;
	int** arr;
public:
	/*Matrix( void )
	{
		this->row = 0;
		this->col = 0;
		this->arr = NULL;
	}*/
	Matrix( void ) : row( 0 ), col ( 0 ), arr( NULL )
	{	}
	/*Matrix( int row, int col )
	{
		this->row = row;
		this->col = col;
		this->arr = new int*[ this->row ];
		for( int index = 0; index < this->row; ++ index )
			this->arr[ index ] = new int[ this->col ];
	}*/
	Matrix( int row, int col ) : row( row ), col( col )
	{
		this->arr = new int*[ this->row ];
		for( int index = 0; index < this->row; ++ index )
			this->arr[ index ] = new int[ this->col ];
	}
	void acceptRecord( void )
	{
		for( int row = 0; row < this->row; ++ row )
		{
			for( int col = 0; col < this->col; ++ col )
			{
				cout<<"Enter number	:	";
				cin>>this->arr[ row ][ col ];
			}
		}
	}
	void printRecord( void )
	{
		for( int row = 0; row < this->row; ++ row )
		{
			for( int col = 0; col < this->col; ++ col )
			{
				cout<<this->arr[ row ][ col ]<<"	";
			}
			cout<<endl;
		}
	}
	~Matrix( void )
	{
		if( this->arr != NULL )
		{
			for( int index = 0; index < this->row; ++ index )
				delete[] this->arr[ index ];
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
int main( void )
{
	Matrix m1(2,3);

	m1.acceptRecord( );

	m1.printRecord( );
	return 0;
}
