#include<iostream>
#include<string>
using namespace std;

template< typename Type>
void swap_object( Type& num1, Type& num2 )
{
	Type temp = num1;
	num1 = num2;
	num2 = temp;
}
int main( void )
{
	int num1 = 10;
	int num2 = 20;

	swap_object<int>( num1, num2 );

	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;

	double num3 = 10.1;
	double num4 = 20.2;

	swap_object<double>( num3, num4 );

	cout<<"Num3	:	"<<num3<<endl;
	cout<<"Num4	:	"<<num4<<endl;

	string str1 = "Mumbai";
	string str2 = "Pune";

	swap_object<string>( str1, str2);

	cout<<"str1	:	"<<str1<<endl;
	cout<<"str2	:	"<<str2<<endl;
	return 0;


}
