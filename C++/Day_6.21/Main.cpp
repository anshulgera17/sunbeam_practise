#include<iostream>
#include<string>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date( void )
	{
		this->day = 0;
		this->month = 0;
		this->year = 0;
	}
	Date( int day, int month, int year )
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void acceptRecord( void )
	{
		cout<<"Day	:	";
		cin>>this->day;
		cout<<"Month	:	";
		cin>>this->month;
		cout<<"Year	:	";
		cin>>this->year;
	}
	void printRecord( void )
	{
		cout<<this->day<<" / "<<this->month<<" / "<<this->year<<endl;
	}
};
class Address
{
private:
	string city;
	string state;
	int pincode;
public:
	Address( void )
	{
		this->city = "";
		this->state = "";
		this->pincode = 0;
	}
	Address( string city, string state, int pincode )
	{
		this->city = city;
		this->state = state;
		this->pincode = pincode;
	}
	void acceptRecord( void )
	{
		cout<<"City	:	";
		cin>>this->city;
		cout<<"State	:	";
		cin>>this->state;
		cout<<"Pincode	:	";
		cin>>this->pincode;
	}
	void printRecord( void )
	{
		cout<<this->city<<"	"<<this->state<<"	"<<this->pincode<<endl;
	}
};
class Person
{
private:
	string name;
	Date birthDate;
	Address currentAddress;
public:
	Person( )
	{	}
	Person( string name, Date birthDate, Address currentAddress )
	{
		this->name = name;
		this->birthDate = birthDate;
		this->currentAddress = currentAddress;
	}
	Person( string name, int day, int month, int year, string city, string state, int pincode )
	: name( name ), birthDate( day, month, year ), currentAddress( city, state, pincode )
	{	}
	void acceptRecord( void )
	{
		cout<<"Name	:	";
		cin>>this->name;
		this->birthDate.acceptRecord();
		this->currentAddress.acceptRecord();
	}
	void printRecord( void )
	{
		cout<<"Name	:	"<<this->name<<endl;
		this->birthDate.printRecord();
		this->currentAddress.printRecord();
	}
};
int main( void )
{
	/*Person p1;
	p1.acceptRecord();
	p1.printRecord();*/

	/*string name("Sandeep");
	Date birthDate(23,7,1983);
	Address currentAddress("A.Nagar", "MH", 411037);
	Person p2( name, birthDate, currentAddress );
	p2.printRecord();*/


	Person p3("Sandeep",23,7,1983,"A.Nagar","MH",411037);
	p3.printRecord();
	return 0;
}
