#include<iostream>
using namespace std;
class Shape
{
protected:
	float area;
	Shape(void):area(0){

	}

	virtual void calculate_area(){

	}
	void get_area(){
	}

	};
class Rectangle:public Shape
{
private:
	int l,b;
public:
	Rectangle(void):l(0),b(0)
	{ }
	void setL(int l)
		{
			this->l = l;
		}

		void setB(int b)
		{
			this->b = b;
		}
	void calculate_area()
		{
			this->area=l*b;
		}


};
class Circle:public Shape
{
private:
	float r;
public:
	Circle(void):r(0)
	{ }

	void setR(float r)
	{
			this->r = r;
		}

	void calculate_area()
	{
		this->area=(3.14)*r;
		}


};

void acceptRecord( )
{

}
void printRecord(){


}

int menu_list(void){
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Rectangle"<<endl;
	cout<<"2.circle"<<endl;
	cout<<"enter choice"<<endl;
cin>>choice;
return choice;
}
int main(void){
int choice;
while((choice = menu_list())!=0){

	Shape * ptr =NULL;

	switch(choice)
	{
	case 1:
		ptr= new Rectangle();

		break;
	case 2:
		ptr= new Circle();

		break;
	}

if(ptr!=NULL){

acceptRecord();
printRecord();

}

}
return 0;
}
