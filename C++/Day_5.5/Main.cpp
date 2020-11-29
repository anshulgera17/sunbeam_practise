#include<iostream>
#include<string>
using namespace std;
void print( void )
{
	cout<<"Hello reference"<<endl;
}
int main( void )
{
	/*double num1 = 10;
	double& num2 = num1;	//Reference to variable */

	/*int num1 = 10;
	int* ptr1 = &num1;
	int*& ptr2 = ptr1;	//Reference to pointer*/

	/*int arr1[ 3 ] = { 10, 20,30 };

	int (&arr2)[ 3 ] = arr1;	//refernce to array

	for( int index = 0; index < 3; ++ index )
		cout<<arr2[ index ]<<endl;
	 */

	/*void (&show)( void ) = print;	//reference to function
	show();*/

	/*string str1("Sunbeam");

	string& str2 = str1;	//reference to object

	cout<<str2<<endl;*/

	return 0;
}
