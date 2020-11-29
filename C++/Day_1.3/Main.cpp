#include<stdio.h>

class Student
{
private:
	char name[ 30 ];	// Data Member /Field / Property / Attribute
	int rollNumber;
	float marks;
public:
	void acceptRecord( void )	//Member function / Method / Operation / Behavior / Message
	{
		printf("Name	:	");
		scanf("%s",name);
		printf("Roll No.	:	");
		scanf("%d",&rollNumber);
		printf("Marks	:	");
		scanf("%g",&marks);
	}
	void printRecord( void )
	{
		printf("Name	:	%s\n",name);
		printf("Roll No.	:	%d\n",rollNumber);
		printf("Marks	:	%g\n",marks);
	}
};
int main( void )
{
	// class Student student;

	Student student;

	student.acceptRecord();

	student.printRecord();

	return 0;
}
