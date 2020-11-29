/*
 * Exception.h
 *
 *  Created on: 25-Feb-2017
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
	public:
		Exception( const string message = "")throw( );

		string getMessage( void )const throw( );
	};
}

#endif /* EXCEPTION_H_ */
