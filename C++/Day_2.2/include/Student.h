/*
 * Student.h
 *
 *  Created on: 22-Feb-2017
 *      Author: sandeep
 */

#ifndef STUDENT_H_
#define STUDENT_H_

	class Student
	{
	private:
		char name[ 30 ];
		int rollNumber;
		float marks;
	public:

		void initializeStudent( const char* name, int rollNumber, float marks );

		void acceptRecord( void );

		void printRecord( void );
	};

#endif /* STUDENT_H_ */
