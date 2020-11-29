#include"../include/Exception.h"
using namespace NException;

int calculate( int num1, int num2 )throw( Exception )
{
	if( num2 == 0 )
		throw  Exception("Divide by zero exception", __FILE__, __LINE__ );
	return num1 / num2;
}



