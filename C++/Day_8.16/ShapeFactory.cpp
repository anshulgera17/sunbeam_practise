#include"../include/Rectangle.h"
#include"../include/Circle.h"
#include"../include/ShapeFactory.h"
using namespace NShape;
Shape* ShapeFactory::getInstance( int choice )
{
	Shape* ptrShape = NULL;
	switch( choice )
	{
	case 1:
		ptrShape = new Rectangle();
		break;
	case 2:
		ptrShape = new Circle();
		break;
	}
	return ptrShape;
}
