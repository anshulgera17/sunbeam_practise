#include"../include/Shape.h"
using namespace NShape;

Shape::Shape( void ) throw( ) : area( 0 )
{	}
float Shape::getArea() const throw( )
{
	return area;
}
Shape::~Shape( void ) throw( )
{	}
