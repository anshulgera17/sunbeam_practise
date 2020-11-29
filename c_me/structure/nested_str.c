#include<stdio.h>
struct date {
	int day,month,year;
};
struct student{
	int roll;
	char name[20];
	float marks;
	struct date birth;
};
void main(){
	struct student std={10,"lol",343,{24,5,2012}};
	struct student s2;
	s2.roll=20;
	strcpy(s2.name,"dabba");
	s2.marks=23;
	s2.birth.day=20;
	s2.birth.month=2;
	s2.birth.year=2017;
	printf("%d \t %s \t %d %d",std.roll,std.name,std.marks,std.birth.day);
	printf("\n%d \t %s \t %d %d",s2.roll,s2.name,s2.marks,s2.birth.day);

}
