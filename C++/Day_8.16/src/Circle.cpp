#include"../include/Math.h"
#include"../include/Circle.h"
using namespace NShape;

Circle::Circle( void ) throw( ) : radius( 0 )
{	}
void Circle::setRadius(float radius)throw( Exception )
{
	if( radius >= 0 )
		this->radius = radius;
	else
		throw Exception("Invalid radius");
}
void Circle::calculateArea( void )throw( )
{
	this->area = Math::PI * Math::power(this->radius, 2 );
}
