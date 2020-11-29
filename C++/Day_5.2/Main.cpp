#pragma pack(1)
#include<iostream>
using namespace std;

class Test
{
private:
	double& num3;
public:
	Test( double num2 ) : num3 ( num2 )
	{	}
};

int main( void )
{
	double num1 = 10;

	Test t( num1 );

	size_t size = sizeof( t );

	cout<<"Size	:	"<<size<<endl;
	return 0;
}

/*int main( void )
{
	double num1 = 10;
	double& num2 = num1;

	cout<<"Size of num1	:	"<<&num1<<endl;
	cout<<"Size of num2	:	"<<&num2 <<endl;
	return 0;
}*/

/*int main( void )
{
	int num1 = 10;

	int& num2 = num1;
	//int* const num2 = &num1;

	cout<<"Num1	:	"<<num2<<endl;
	//cout<<"Num1	:	"<<*num2<<endl;
	return 0;
}*/

/*int main( void )
{
	int num1 = 10;
	int& num2 = num1;
	int& num3 = num2;

	++ num1;
	++ num2;
	++ num3;

	cout<<"Num1	:	"<<num1<<endl;	//13
	cout<<"Num2	:	"<<num2<<endl;	//13
	cout<<"Num3	:	"<<num3<<endl;	//13
	return 0;
}*/
/*int main( void )
{
	int** pptr = NULL;

	int num1 = 10;
	int* ptrNum1 = &num1;

	int num2 = 20;
	int* ptrNum2 = &num2;

	//pptr = &ptrNum1;
	pptr = &ptrNum2;
	++ (**pptr);

	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	return 0;
}*/
/*int main( void )
{
	int num1 = 10;
	int& num2 = num1;
	const int& num3 = num1;

	++ num1;
	++ num2;
	// ++ num3;

	cout<<"Num1	:	"<<num1<<endl;

	cout<<"Num2	:	"<<num2<<endl;

	cout<<"Num3	:	"<<num3<<endl;

	return 0;
}*/

/*int main( void )
{
	int num1 = 10;
	int num2 = 20;
	int& num3 = num1;
	num3 = num2;
	++ num2;

	cout<<"Num1	:	"<<num1<<endl;	//20

	cout<<"Num2	:	"<<num2<<endl;	//21

	cout<<"Num3	:	"<<num3<<endl;	//20
	return 0;
}*/

/*int main( void )
{
	//int& num1;	//Compiler Error

	//int& num1 = 10;	//Error

	int num1 = 10;

	int& num2 = num1;	//Ok

	++ num1;
	++ num2;

	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;

	return 0;
}*/

/*int main( void )
{
	int num1 = 10;			//Initialization

	int& num2 = num1;

	cout<<"Num1	:	"<<num1<<"	Address	:	"<<&num1<<endl;

	cout<<"Num2	:	"<<num2<<"	Address	:	"<<&num2<<endl;
	return 0;
}*/

/*int main( void )
{
	int num1 = 10;			//Initialization

	int* ptrNum1 = &num1;	//Initialization

	cout<<"Num1	:	"<<num1<<"	Address	:	"<<&num1<<endl;

	cout<<"Num2	:	"<<*ptrNum1<<"	Address	:	"<<ptrNum1<<endl;
	return 0;
}*/

/*int main( void )
{
	int num1 = 10;		//Initialization

	int num2 = num1;	//Initialization

	cout<<"Num1	:	"<<num1<<"	Address	:	"<<&num1<<endl;

	cout<<"Num2	:	"<<num2<<"	Address	:	"<<&num2<<endl;
	return 0;
}*/
