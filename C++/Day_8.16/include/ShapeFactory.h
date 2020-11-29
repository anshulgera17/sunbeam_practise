/*
 * ShapeFactory.h
 *
 *  Created on: 28-Feb-2017
 *      Author: sandeep
 */

#ifndef SHAPEFACTORY_H_
#define SHAPEFACTORY_H_

#include"../include/Shape.h"
using namespace NShape;

namespace NShape
{
	class ShapeFactory
	{
	public:
		static Shape* getInstance( int choice );
	};
}

#endif /* SHAPEFACTORY_H_ */
