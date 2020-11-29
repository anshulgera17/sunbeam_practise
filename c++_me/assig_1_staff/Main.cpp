#include<iostream>
#include<string>
using namespace std;
namespace Nstaff
{
class Staff
{
private:
	string name;
	int id;
protected:	int salary;
public:
Staff( void ) : name( "" ), id( 0 ), salary( 0 ){

}

virtual void acceptRecord(void){
	cout<<"Enter name of employee"<<endl;
	cin>>this->name;
	cout<<"enter id of employee"<<endl;
	cin>>this->id;

}
virtual void calculate_salary(void){

}
void printRecord(void){
	cout<<"name:   "<<this->name<<endl;
	cout<<"Id     "<<this->id<<endl;
	cout<<"Salary  "<<this->salary<<endl;
}

};
class Teaching_staff : public Staff
{
private:
	int theory_lecture;
public:
	Teaching_staff(void){
		this->theory_lecture=0;
	}

void	acceptRecord(void){
	Staff::acceptRecord();
	cout<<"enter no of theory lectures:"<<endl;
	cin>>this->theory_lecture;
}
void calculate_salary(void){
	this->salary=1500*theory_lecture;
}

};
class Non_Teaching_staff: public Staff
{
private:
	int lab_lecture;
public:
	Non_Teaching_staff(void){
		this->lab_lecture=0;
	}
	void	acceptRecord(void){
		Staff::acceptRecord();
		cout<<"enter no of lab lectures:"<<endl;
		cin>>this->lab_lecture;
	}
	void calculate_salary(void){
		this->salary=750*lab_lecture;
	}
};
}
int menu_list(void){
	int choice;
	cout<<"0. Exit"<<endl;
	cout<<"1.Teaching staff"<<endl;
	cout<<"2.Non teaching staff"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	return choice;
}
int main(void){
	int choice;
	while((choice= menu_list())!=0)
	{
		using namespace Nstaff;
		Staff* ptr=NULL;
		switch(choice){
		case 1:

		ptr=new Teaching_staff();
		break;
		case 2:
		ptr=new Non_Teaching_staff();
		break;
		}

		if(ptr!=NULL)
		{
		ptr->acceptRecord();
		ptr->calculate_salary();
		ptr->printRecord();
		delete ptr;
		}
	}
	return 0;
}
