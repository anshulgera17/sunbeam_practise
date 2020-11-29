/*
 * Circle.h
 *
 *  Created on: 28-Feb-2017
 *      Author: sandeep
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include"../include/Shape.h"
using namespace NShape;

#include"../include/Exception.h"
using namespace NException;

namespace NShape
{
	class Circle : public Shape
	{
	private:
		float radius;
	public:
		Circle( void ) throw( );

		void setRadius(float radius)throw( Exception );

		void calculateArea( void )throw( );
	};
}

#endif /* CIRCLE_H_ */
