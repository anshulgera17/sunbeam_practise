#include<stdio.h>
struct Student
{
	char name[ 30 ];	// Data Member /Field / Property / Attribute
	int rollNumber;
	float marks;
};
void acceptRecord( struct Student* ptrStudent )
{
	printf("Name	:	");
	scanf("%s",ptrStudent->name);
	printf("Roll No.	:	");
	scanf("%d",&ptrStudent->rollNumber);
	printf("Marks	:	");
	scanf("%g",&ptrStudent->marks);
}
void printRecord( struct Student* ptrStudent )
{
	printf("Name	:	%s\n",ptrStudent->name);
	printf("Roll No.	:	%d\n",ptrStudent->rollNumber);
	printf("Marks	:	%g\n",ptrStudent->marks);
}
int main( void )
{
	struct Student student;

	acceptRecord( &student );

	printRecord( &student );

	return 0;
}
