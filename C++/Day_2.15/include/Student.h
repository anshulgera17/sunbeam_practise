/*
 * Student.h
 *
 *  Created on: 22-Feb-2017
 *      Author: sandeep
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include<string>
using namespace std;

namespace NStudent
{
	class Student
	{
	private:
		string name;
		int rollNumber;
		float marks;
	public:
		void initStudent();

		void acceptRecord( void );

		void printRecord( void );
	};
}//end of namespace

#endif /* STUDENT_H_ */
