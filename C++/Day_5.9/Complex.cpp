#include<iostream>
using namespace std;

#include"../include/Complex.h"

inline Complex::Complex( void )
{
	this->real = 0;
	this->imag = 0;
}
inline Complex::Complex( int real, int imag )
{
	this->real = real;
	this->imag = imag;
}
inline void Complex::printRecord( void )
{
	cout<<"Real	:	"<<this->real<<endl;
	cout<<"Real	:	"<<this->imag<<endl;
}

