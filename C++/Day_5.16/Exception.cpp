#include<iostream>
using namespace std;

#include"../include/Exception.h"
using namespace NException;

Exception::Exception( const string message, const string fileName, const int lineNumber )
{
	this->message = message;
	this->fileName = fileName;
	this->lineNumber = lineNumber;
}
void Exception::printStackTrace( void )const
{
	cerr<<"Exception : "<<this->message<<endl;
	cerr<<"In file "<<this->fileName<<" ";
	cerr<<"at "<<this->lineNumber<<endl;
}
