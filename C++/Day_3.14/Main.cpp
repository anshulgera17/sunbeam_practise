#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	string name;
	int rollNumber;
	float marks;
private:
	Student( void )
	{
		this->name = "";
		this->rollNumber = 0;
		this->marks = 0;
	}
	Student( string name, int rollNumber, float marks )
	{
		this->name = name;
		this->rollNumber = rollNumber;
		this->marks = marks;
	}
public:
	void printRecord( void )
	{
		cout<<"Name		:	"<<this->name<<endl;
		cout<<"Roll No.	:	"<<this->rollNumber<<endl;
		cout<<"Marks		:	"<<this->marks<<endl;
	}
	static void invoke()
	{
		Student s1( "ABC", 11, 64 );
		s1.printRecord();
	}
};
int main( void )
{
	Student::invoke();

	return 0;
}




