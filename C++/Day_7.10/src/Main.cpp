#include<iostream>
using namespace std;

class Base
{
private:
	int num1;
	int num2;
public:
	Base( void )
	{
		this->num1 = 10;
		this->num2 = 20;
	}
	Base( int num1, int num2 )
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	void showRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
	void printRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
};
class Derived : public Base
{
private:
	int num3;
public:
	Derived( void )
	{
		this->num3 = 30;
	}
	Derived( int num1, int num2, int num3 ) : Base( num1, num2 )
	{
		this->num3 = num3;
	}
	void printRecord( void )
	{
		Base::printRecord();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
	void displayRecord( void )
	{
		Base::showRecord();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
};
int main( void )
{
	Base* ptrBase = new Derived( 500,600,700);	//Upcasting
	ptrBase->printRecord();
	cout<<endl;
	Derived* ptrDerived = ( Derived*)ptrBase;	//downcasting
	ptrDerived->printRecord();
	return 0;
}
/*int main( void )
{
	Base* ptrBase = new Derived( 500,600,700);	//Upcasting

	ptrBase->printRecord();	//Base::printRecord

	delete ptrBase;

	return 0;
}*/
/*int main( void )
{
	Derived* ptrDerived = new Derived( 500,600,700);
	//Base* ptrBase = ( Base* )ptrDerived;	//Upcasting
	Base* ptrBase = ptrDerived;	//Upcasting
	ptrBase->printRecord();	//Base::printRecord
	return 0;
}*/
/*int main( void )
{
	Base base(500,600);
	Derived derived;
	derived = base;
	derived.printRecord();
	return 0;
}*/
/*int main( void )
{
	Base base;
	Derived derived(500,600,700);
	base = derived;	//Object Slicing
	base.printRecord();	//500, 600
	return 0;
}*/
/*int main( void )
{
	Derived derived1(500,600,700);
	Derived derived2;
	derived2 = derived1;
	derived2.printRecord();
	return 0;
}*/
/*int main( void )
{
	Base base1( 100,200);
	Base base2 = base1;
	base2.printRecord();	//100,200
	return 0;
}*/
/*int main( void )
{
	Derived* ptrDerived = new Derived();

	//ptrDerived->showRecord();	//Base::showRecord

	//ptrDerived->printRecord();	//Derived::printRecord

	//ptrDerived->Base::printRecord();	//Base::printRecord

	//ptrDerived->displayRecord();	// Derived::displayRecord

	delete ptrDerived;
	return 0;
}*/
/*int main( void )
{
	Derived derived;

	//derived.showRecord();	//Base::showRecord

	//derived.printRecord();	//Derived::printRecord

	//derived.Base::printRecord();	//Base::printRecord

	//derived.displayRecord();	//Derived::displayRecord
	return 0;
}*/
/*int main( void )
{
	Base* ptrBase = new Base();

	//ptrBase->showRecord();		//Base::showRecord

	//ptrBase->printRecord();		//Base::printRecord

	//ptrBase->Derived::printRecord();	//Compiler Error

	//ptrBase->displayRecord();		//Compiler Error

	delete ptrBase;
	return 0;
}*/
/*int main( void )
{
	Base base;

	//base.showRecord();		//Base::showRecord

	//base.printRecord();		//Base::printRecord

	//base.Derived::printRecord();	//Compiler Error

	//base.displayRecord();		//Compiler Error

	return 0;
}*/
