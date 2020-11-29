/*
 * Stack.h
 *
 *  Created on: 01-Mar-2017
 *      Author: sandeep
 */

#ifndef STACK_H_
#define STACK_H_

#include<string>
using namespace std;

namespace NStack
{
	template<class Type>
	class Stack
	{
	private:
		int top;
		size_t size;
		Type* arr;
	public:
		Stack( void )
		{
			this->top = -1;
			this->size = 0;
			this->arr = NULL;
		}
		Stack( size_t size )
		{
			this->top = -1;
			this->size = size;
			this->arr = new Type[ this->size ];
		}
		bool empty( void )
		{
			return this->top == -1;
		}
		bool full( void )
		{
			return this->top == this->size - 1;
		}
		void push( Type data )throw( string )
		{
			if( this->full())
				throw string("Stack is full");
			this->arr[ ++ this->top ] = data;
		}
		Type peek( void )throw( string )
		{
			if( this->empty())
				throw string("Stack is empty");
			return this->arr[ this->top ];
		}
		void pop( void )throw( string )
		{
			if( this->empty())
				throw string("Stack is empty");
			-- this->top;
		}
		~Stack( void )
		{
			if( this->arr != NULL )
			{
				delete[] this->arr;
				this->arr = NULL;
			}
		}
	};
}

#endif /* STACK_H_ */
