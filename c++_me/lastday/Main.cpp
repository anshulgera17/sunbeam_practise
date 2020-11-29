#include<iostream>
#include<string>
using namespace std;

class Complex{
private:
	int real,imag;
public:
	Complex(void):real(0),imag(0){

	}

	Complex(int real,int imag){
	this->real=real;
	this->imag=imag;
	}
	Complex operator+(Complex &other){
		Complex temp;
		temp.real=this->real+other.real;
		temp.imag=this->imag+other.imag;
		return temp;
	}

	Complex operator-(Complex &other){
		Complex temp;
		temp.real=this->real-other.real;
		temp.imag=this->imag-other.imag;
		return temp;
	}

	Complex operator*(Complex &other){
		Complex temp;
		temp.real=this->real*other.real;
		temp.imag=this->imag*other.imag;
		return temp;
	}

	Complex operator/(Complex &other){
		Complex temp;
		temp.real=this->real/other.real;
		temp.imag=this->imag/other.imag;
		return temp;
	}

	bool operator==(Complex &other)
		{
			if(this->real==other.real && this->imag==other.imag)
				return true;
			return false;
		}

	void printRecord(void){
		cout<<"real:  "<<this->real<<endl;
		cout<<"imag:  "<<this->imag<<endl;
	}
};



int menu_list(){
	LABEL:

	int choice;

	cout<<"0.Exit"<<endl;
	cout<<"1.Add_object"<<endl;
	cout<<"2.Subtract_object"<<endl;
	cout<<"3.Multiply_object"<<endl;
	cout<<"4.Divide_object"<<endl;
	cout<<"5. assignment operator"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>choice;

	try {
				if(choice > 6 || choice < 0)
				{
					string ex("Invalid choice");
					throw ex;
				}
				else
				{
					return choice;
				}

		}

	catch (string& ex)
		{
			cout<<ex<<endl;
			goto LABEL;
		}

}


int main(void){
	Complex c1(9,8);
	Complex c2(3,4);
	Complex c3;

	int choice;
	while((choice=menu_list())!=0)
	{
		switch(choice){
		case 1:
			c3=c1+c2;
			c3.printRecord();
			break;
		case 2:
			c3=c1-c2;
			c3.printRecord();
			break;
		case 3:
			c3=c1*c2;
			c3.printRecord();
			break;
		case 4:
			c3=c1/c2;
			c3.printRecord();
			break;
		case 5:
			cout<<(c1==c2 ?"Equal":"Not Equal")<<endl;

			break;
		}
	}
	return 0;

}
