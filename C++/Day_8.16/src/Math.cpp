#include"../include/Math.h"
using namespace NShape;
const double Math::PI = 3.14;
double Math::power( double base, int index )
{
	double result = 1;
	for( int count = 1; count <= index; ++ count )
	{
		result = result * base;
	}
	return result;
}
