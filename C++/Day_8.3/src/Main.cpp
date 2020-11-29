#include<iostream>
#include<string>
using namespace std;
namespace NStaff
{
	class Staff
	{
	private:
		string name;
		int id;
	protected:
		float salary;
	public:
		Staff( void ) : name( "" ), id( 0 ), salary( 0 )
		{	}
		virtual void acceptRecord( void )
		{
			cout<<"Name	:	";
			cin>>this->name;
			cout<<"id	:	";
			cin>>this->id;
		}
		virtual void calculateSalary( void )
		{
			//TODO
		}
		void printRecord( void )
		{
			cout<<"Name	:	"<<this->name<<endl;
			cout<<"Id	:	"<<this->id<<endl;
			cout<<"Salary	:	"<<this->salary<<endl;
		}
	};
	class TeachingStaff : public Staff
	{
	private:
		int theorySessions;
	public:
		TeachingStaff( void ) : theorySessions( 0 )
		{	}
		void acceptRecord( void )
		{
			Staff::acceptRecord();
			cout<<"Theory Session(s)	:	";
			cin>>this->theorySessions;
		}
		void calculateSalary( void )
		{
			this->salary = 1500 * this->theorySessions;
		}
	};
	class NonTeachingStaff : public Staff
	{
	private:
		int labSessions;
	public:
		NonTeachingStaff( void ) : labSessions( 0 )
		{	}
		void acceptRecord( void )
		{
			Staff::acceptRecord();
			cout<<"Lab Session(s)	:	";
			cin>>this->labSessions;
		}
		void calculateSalary( void )
		{
			this->salary = 750 * this->labSessions;
		}
	};
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit."<<endl;
	cout<<"1.Teaching Staff."<<endl;
	cout<<"2.Non Teaching Staff."<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		using namespace NStaff;
		Staff* ptrStaff = NULL;
		switch( choice )
		{
		case 1:
			ptrStaff = new TeachingStaff();	//Upcasting
			break;
		case 2:
			ptrStaff = new NonTeachingStaff();	//Upcasting
			break;
		}
		if( ptrStaff != NULL )
		{
			ptrStaff->acceptRecord();
			ptrStaff->calculateSalary();
			ptrStaff->printRecord();
			delete ptrStaff;
		}
	}
	return 0;
}
