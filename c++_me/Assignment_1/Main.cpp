#include<iostream>
using namespace std;

#include"../include/Calender.h"

int main(){
	Date obj;
	obj.AcceptDateFromConsole();
int	num = obj.ValidateDate();
if(num==1){
	obj.AddNumberOfDays();
}
else{
	cout<<"insert date in correct format)"<<endl;
	obj.AcceptDateFromConsole();

}

	/* Date();
	 Date(int day,int month,int year);*/
	 obj.IsLeapYear();/*
	 PrintDateOnConsole();
	 PrintDateToString();*/

}


