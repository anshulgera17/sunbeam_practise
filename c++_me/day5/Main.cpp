#include<iostream>
using namespace std;
int main(){

/*	int num1=10;
	int& num2=num1;
	int *ptrnum=&num1;
	int& num3=num1;
	num1++;
	num2++;
	num3++;
	cout<<ptrnum<<endl;
	cout<<&num1<<endl;
	cout<<num2<<endl;
	cout<<num3<<endl;*/

	int** pptr=NULL;
	int num1=10;
	int* ptrnum1=&num1;
	int num2=30;
	int* ptrnum2=&num2;
	pptr = &ptrnum1;
	//*pptr=&ptrnum2;

++(**pptr);

cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	}
