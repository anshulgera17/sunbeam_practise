#include"../include/Rectangle.h"
using namespace NShape;

Rectangle::Rectangle( void ) throw( ) : length( 0 ), breadth( 0 )
{	}
void Rectangle::setLength( const float length )throw( Exception )
{
	if( length >= 0 )
		this->length = length;
	else
		throw Exception("Invalid length");
}
void Rectangle::setBreadth(float breadth)throw( Exception )
{
	if( breadth >= 0 )
		this->breadth = breadth;
	else
		throw Exception("Invalid breadth");
}
void Rectangle::calculateArea( void )throw( )
{
	this->area = this->length * this->breadth;
}
