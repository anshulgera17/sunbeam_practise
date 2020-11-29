/*
 * Complex.h
 *
 *  Created on: 25-Feb-2017
 *      Author: sandeep
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void );

	Complex( int real, int imag );

	void printRecord( void );

};

#endif /* COMPLEX_H_ */
