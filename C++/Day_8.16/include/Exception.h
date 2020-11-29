/*
 * Exception.h
 *
 *  Created on: 28-Feb-2017
 *      Author: sandeep
 */

#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include<string>
using namespace std;
namespace NException
{
	class Exception
	{
	private:
		string message;
		string fileName;
		int lineNumber;
	public:
		Exception( const string message = "", const string fileName = "", const int lineNumber = 0 ) ;

		const string& getFileName() const;

		int getLineNumber() const;

		const string& getMessage() const;
	};
}

#endif /* EXCEPTION_H_ */
