#include<iostream>
using namespace std;

class A
{
public:
	virtual void f1( void )
	{
		cout<<"A::f1()"<<endl;
	}
	virtual void f2( void )
	{
		cout<<"A::f2()"<<endl;
	}
	virtual void f3( void )
	{
		cout<<"A::f3()"<<endl;
	}
	void f4( void )
	{
		cout<<"A::f4()"<<endl;
	}
	void f5( void )
	{
		cout<<"A::f5()"<<endl;
	}
};
class B : public A
{
public:
	virtual void f1( void )
	{
		cout<<"B::f1()"<<endl;
	}
	void f2( void )
	{
		cout<<"B::f2()"<<endl;
	}
	void f4( void )
	{
		cout<<"B::f4()"<<endl;
	}
	virtual void f5( void )
	{
		cout<<"B::f5()"<<endl;
	}
	virtual void f6( void )
	{
		cout<<"B::f6()"<<endl;
	}
};
int main( void )
{
	B obj;
	A& a = obj;	//Upcasting //A* const a = &obj;

	//a.f1();	//B::f1	--> Late Binding

	//a.f2();	//B::f2	--> Late Binding

	//a.f3();	//A::f3	--> Late Binding

	//a.f4();	//A::f4	--> Early Binding

	//a.f5(); 	//A::f5	--> Early Binding

	//a.f6();	//Compiler Error :F6 is not a member of class A

	return 0;
}
/*int main( void )
{
	B* ptr  = new B();

	//ptr->f1();	//B::f1	--> Late Binding

	//ptr->f2();	//B::f2	--> Late Binding

	//ptr->f3();	//A::f3	--> Late Binding

	//ptr->f4();	//B::f4	--> Early Binding

	//ptr->f5(); 	//B::f5	--> Late Binding

	//ptr->f6();	//B::F6 --> late Binding

	return 0;
}*/
/*int main( void )
{
	A* ptr  = new B();	//Upcasting

	//ptr->f1();	//B::f1	--> Late Binding

	//ptr->f2();	//B::f2	--> Late Binding

	//ptr->f3();	//A::f3	--> Late Binding

	//ptr->f4();	//A::f4	--> Early Binding

	// ptr->f5(); 	//A::f5	--> Early Binding

	ptr->f6();	//Compiler Error :F6 is not a member of class A

	return 0;
}*/
/*int main( void )
{
	A* ptr  = new A();

	//ptr->f1();	//A::f1	--> Late Binding

	//ptr->f2();	//A::f2	--> Late Binding

	//ptr->f3();	//A::f3	--> Late Binding

	//ptr->f4();	//A::f4	--> Early Binding

	//ptr->f5(); 	//A::f5	--> Early Binding

	//ptr->f6();	//Compiler Error :F6 is not a member of class A

	return 0;
}*/
/*int main( void )
{
	A obj;

	//obj.f1();	//A::f1	--> Early Binding

	//obj.f2();	//A::f2	--> Early Binding

	//obj.f3();	//A::f3	--> Early Binding

	//obj.f4();	//A::f4	--> Early Binding

	//obj.f5(); //A::f5	--> Early Binding

	//obj.f6();	//Compiler Error :F6 is not a member of class A

	return 0;
}*/
