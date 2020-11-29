#include<iostream>
using namespace std;

#include"../include/Student.h"
using namespace NStudent;

void Student::initStudent()
{
	this->name = "";
	this->rollNumber = 0;
	this->marks = 0;
}
void Student::acceptRecord( void )
{
	cout<<"Name	:	";
	cin>>this->name;
	cout<<"Roll No.	:	";
	cin>>this->rollNumber;
	cout<<"Marks	:	";
	cin>>this->marks;
}
void Student:: printRecord( void )
{
	cout<<"Name	:	"<<this->name<<endl;
	cout<<"Roll No.	:	"<<this->rollNumber<<endl;
	cout<<"Marks	:	"<<this->marks<<endl;
}




