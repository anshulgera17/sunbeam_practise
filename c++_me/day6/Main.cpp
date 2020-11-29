
#include<iostream>
#include<string>
using namespace std;
class A{
private:
	int num1;
public:
	A(void){
this->num1=10;
	}

	A(int num1){
		this->num1=num1;
	}

	 void printRecord(void){
		this->showRecord();
	}

void showRecord(void){
		cout<<"num1"<<this->num1<<endl;
	}
};
class B:virtual public A
{
private:
	int num2;
public:
	B(void)
	{
		this->num2=20;
	}

	B(int num1,int num2):A (num1)
	{
		this->num2=num2;
	}

	void printRecord(void)
		{
		A::showRecord();
		this->showRecord();
		}
protected:	void showRecord(void)
		{
			cout<<"num2"<<this->num2<<endl;
		}
};
class C: virtual public A
{
private:int num3;

public:

C(void)
{
this->num3=30;
}

C(int num1,int num3):A(num1)
{
	this->num3=num3;
}

void printRecord(void){
A::showRecord();
this->showRecord();
	}
	void showRecord(void){
		cout<<"num3"<<this->num3<<endl;
	}
};
class D:public B,public C
{
private:int num4;

public:

D(void)
{
this->num4=40;
}

D(int num1,int num2,int num3,int num4): B (num1,num2),C(num1,num3)
{
this->num4=num4;
}

void printRecord(void){

	A::showRecord();
	B::showRecord();
	C::showRecord();
	this->showRecord();
	}

protected:
void showRecord(void){
		cout<<"num4:"<<this->num4<<endl;
	}
};

int main(){
	D d;
	d.printRecord();

	return 0;

}


/*class A{
private:
	int num1;
public:
	A(void){
		this->num1=0;
	}
	void printRecord(void){
		cout<<"Num1:"<<this->num1<<endl;
	}
};
class B:public A{
public:
	void printRecord(){
		A::printRecord();
	}
};
class C:public A{
public:
	void printRecord(){
		A::printRecord();
	}
};
int main(){
	B b;
	b.printRecord();

	C c;
	c.printRecord();
}*/
/*
class Person
{
private:
	string name;
	int age;

public:
static int number;

Person(void){
this->name="";
this->age=0;
}

Person(string name,int age){
this->name=name;
this->age=age;
}

void showRecord(){
cout<<"Name: "<<this->name<<endl;
cout<<"Age: "<<this->age<<endl;
}

void printRecord(){
	cout<<"Name: "<<this->name<<endl;
	cout<<"Age: "<<this->age<<endl;
}
static void f1(){
cout<<"person::f1()"<<endl;
}
};
int Person::number=100;



class Employee:public Person{
private:
int empid;
int	salary;
public:
Employee(void){
	this->empid=0;
	this->salary=0;
}
Employee(string name,int age,int empid,int salary ):Person(name,age){
this->empid=empid;
this->salary=salary;
}
void showRecord(){
cout<<"Empid:"<<this->empid<<endl;
cout<<"Salary:"<<this->salary<<endl;
}
void printRecord(){
this->Person::printRecord();
	cout<<"Empid:"<<this->empid<<endl;
	cout<<"Salary:"<<this->salary<<endl;
}

};
int main(void){
	Employee emp("anshul",2,4,45);
	emp.printRecord();
	emp.f1();
emp.f1();
	emp.showRecord();
	emp.Person::printRecord();
	emp.Employee::printRecord();
	cout<<Person::number<<endl;
	cout<<Employee::number<<endl;
}

*/
