/*
 * Complex.h
 *
 *  Created on: 25-Feb-2017
 *      Author: sandeep
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include"../include/Exception.h"
using namespace NException;

namespace NComplex
{
	class Complex
	{
	private:
		int real;
		int imag;
	public:
		Complex( void )throw( );

		int getReal( void )const throw( );

		void setReal( const int real )throw( Exception );

		int getImag( void )const throw( );

		void setImag( const int imag )throw( Exception );
	};
}

#endif /* COMPLEX_H_ */
