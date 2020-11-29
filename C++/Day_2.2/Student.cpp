#include<stdio.h>
#include<string.h>
#include"../include/Student.h"

void Student::initializeStudent( const char* name, int rollNumber, float marks )
{
	strcpy( this->name, name);
	this->rollNumber = rollNumber;
	this->marks = marks;
}
void Student::acceptRecord( void )	//Member function / Method / Operation / Behavior / Message
{
	printf("Name	:	");
	scanf("%s",name);
	printf("Roll No.	:	");
	scanf("%d",&rollNumber);
	printf("Marks	:	");
	scanf("%g",&marks);
}
void  Student:: printRecord( /* Student* const this */ )
{
	printf("Name	:	%s\n",this->name);
	printf("Roll No.	:	%d\n",this->rollNumber);
	printf("Marks	:	%g\n",this->marks);
}




