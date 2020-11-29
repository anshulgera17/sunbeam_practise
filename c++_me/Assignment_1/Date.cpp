
#include<iostream>
using namespace std;

#include "../include/Calender.h"
 Date obj;

void Date::AcceptDateFromConsole(){
cout<<"Enter date for add Days in Date:"<<endl;
cout<<"Day(dd)"<<endl;
cin>>this->date;
cout<<"Month(1-12)(mm)"<<endl;
cin>>this->month;
cout<<"Year(yyyy)"<<endl;
cin>>this->year;
}

int Date::ValidateDate(){
	int check=0;
	if(this->date==1 ||this->date==2 ||this->date==3 ||this->date==4 ||this->date==5 ||this->date==6
			||this->date==7 ||this->date==8 ||this->date==9 ||this->date==10 ||this->date==11 ||this->date==12
			||this->date==13||this->date==14 ||this->date==15 ||this->date== 16 ||this->date==17 ||this->date==18 ||this->date==19
			||this->date==20||this->date==21||this->date==22||this->date==23||this->date==24||this->date==25
			||this->date==26||this->date==27||this->date==28||this->date==29||this->date==30||this->date==31)
	{
		check++;
	}
	if(this->month==1|| this->month==2|| this->month==3|| this->month==4|| this->month==5||
			this->month==6|| this->month==7|| this->month==8|| this->month==9|| this->month==10||
			this->month==11|| this->month==12){
		check++;
	}
	if(this->year>0 ||this->year <10000){
		check++;
	}
	if(check==3){
		return 1;
	}
		return 0;
}
void Date::AddNumberOfDays(){

cout<<"Enter No of Days to be added"<<endl;
cin>>this->no_Of_Days;
int remin_days,remain_days1;
if(this->no_Of_Days>365)
	this->year+=(no_Of_Days/365);\

	remin_days=(no_Of_Days%365);

while(remin_days>31 || remin_days<=365){
switch(this->month){
case 1:{
	this->month+=remin_days/31;
	remain_days1=remin_days%31;
}
	break;
case 2:{
	this->month+=remin_days/28;
		remain_days1=remin_days%28;
}break;
case 3:{
	this->month+=remin_days/31;
		remain_days1=remin_days%31;
}break;
case 4:{
	this->month+=remin_days/30;
		remain_days1=remin_days%30;
}break;
case 5:{
	this->month+=remin_days/31;
		remain_days1=remin_days%31;
}break;
case 6:{
	this->month+=remin_days/30;
		remain_days1=remin_days%30;
}break;
case 7:{
	this->month+=remin_days/31;
		remain_days1=remin_days%31;

}break;
case 8:{
	this->month+=remin_days/31;
		remain_days1=remin_days%31;
}break;
case 9:{
	this->month+=remin_days/30;
		remain_days1=remin_days%30;
}	break;
case 10:{
	this->month+=remin_days/31;
		remain_days1=remin_days%31;
}	break;
case 11:
{	this->month+=remin_days/30;
		remain_days1=remin_days%30;
}	break;
case 12:
{	this->month+=remin_days/31;
		remain_days1=remin_days%31;
}	break;
};

}






}
/*
int Date(){
return 0;
}
int Date(int day,int month,int year){
	return 0;
}*/
int Date::IsLeapYear(){
if(year%4==0 ||year%400==0){
return 1;
}
else
	return 0;
}
/*
void PrintDateOnConsole(){

}
void PrintDateToString(){

}*/


