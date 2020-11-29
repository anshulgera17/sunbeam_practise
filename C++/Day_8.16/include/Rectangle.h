/*
 * Rectangle.h
 *
 *  Created on: 28-Feb-2017
 *      Author: sandeep
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include"../include/Shape.h"
using namespace NShape;

#include"../include/Exception.h"
using namespace NException;

namespace NShape
{
class Rectangle : public Shape
	{
	private:
		float length;
		float breadth;
	public:
		Rectangle( void ) throw( );

		void setLength( const float length )throw( Exception );

		void setBreadth(float breadth)throw( Exception );

		void calculateArea( void )throw( );
	};
}

#endif /* RECTANGLE_H_ */
