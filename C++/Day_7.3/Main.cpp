#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person( void )
	{
		this->name = "";
		this->age = 0;
	}
	Person( string name, int age )
	{
		this->name = name;
		this->age = age;
	}
	void showRecord( void )
	{
		cout<<"Name	:	"<<this->name<<endl;
		cout<<"Age	:	"<<this->age<<endl;
	}
	void printRecord( void )
	{
		cout<<"Name	:	"<<this->name<<endl;
		cout<<"Age	:	"<<this->age<<endl;
	}
};
class Employee : public Person
{
private:
	int empid;
	float salary;
public:
	Employee( void )
	{
		this->empid = 0;
		this->salary = 0;
	}
	Employee( string name, int age, int empid, float salary )
	{
		this->empid = empid;
		this->salary = salary;
	}
	void printRecord( void )
	{
		cout<<"Empid	:	"<<this->empid<<endl;
		cout<<"Salary	:	"<<this->salary<<endl;
	}
	void displayRecord( void )
	{
		this->showRecord();
		cout<<"Empid	:	"<<this->empid<<endl;
		cout<<"Salary	:	"<<this->salary<<endl;
	}
};
int main( void )
{
	Employee emp;

	emp.Person::printRecord();

	//emp.printRecord();

	emp.Employee::printRecord();
	return 0;
}
