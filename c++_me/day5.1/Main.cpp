#include<iostream>
using namespace std;
/*
class Test
{
private: double& num3;
public:Test(double num2):num3 (num2)
{
}

};
int main(void){
double num1=10;
Test t(num1);
size_t size =sizeof(t);
cout<<"size:"<<size<<endl;

	return 0;
}
*/

void print(void){
	cout<<"Hello reference"<<endl;
}
int main(void){
	double num1=10;
	double &num2=num1;
	return 0;
}
