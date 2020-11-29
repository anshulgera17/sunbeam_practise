#include"../include/Exception.h"
using namespace NException;

Exception:: Exception( const string message)throw( )
{
	this->message = message;
}
string Exception::getMessage( void )const throw()
{
	return this->message;
}

