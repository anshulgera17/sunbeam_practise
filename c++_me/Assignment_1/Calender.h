
#include<iostream>
using namespace std;
#include<string>


class Date{
private:
	int date;
	int month;
	int year;
	unsigned int no_Of_Days;
public:
void AcceptDateFromConsole();
void AddNumberOfDays();
/*int Date();
int Date(int day,int month,int year);*/
int IsLeapYear();/*
void PrintDateOnConsole();
void PrintDateToString();*/
int ValidateDate();
};





