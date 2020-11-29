#include"../include/Exception.h"
using namespace NException;

Exception::Exception( const string message, const string fileName, const int lineNumber ) : message( message ), fileName( fileName ), lineNumber( lineNumber )
{	}
const string& Exception::getFileName() const
{
	return fileName;
}
int Exception::getLineNumber() const
{
	return lineNumber;
}
const string& Exception::getMessage() const
{
	return message;
}
