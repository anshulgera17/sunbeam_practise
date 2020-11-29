#include"../include/Complex.h"
using namespace NComplex;

Complex:: Complex( void )throw( )
{
	this->real = 0;
	this->imag = 0;
}
int Complex::getReal( void )const throw( )
{
	return this->real;
}
void Complex::setReal( const int real )throw( Exception )
{
	if( real >= 0 )
		this->real = real;
	else
		throw Exception("Invalid real number");
}
int Complex::getImag( void )const throw( )
{
	return this->imag;
}
void Complex::setImag( const int imag )throw( Exception )
{
	if( imag >= 0 )
		this->imag = imag;
	else
		throw Exception("Invalid imag number");
}
