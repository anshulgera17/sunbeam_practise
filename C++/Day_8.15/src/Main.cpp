#include<iostream>
using namespace std;

class Base
{
private:
	int num1;
	int num2;
public:
	Base( void ) : num1( 0 ), num2( 0 )
	{	}
	void setNum1(int num1)
	{
		this->num1 = num1;
	}
	void setNum2(int num2)
	{
		this->num2 = num2;
	}
	virtual void printRecord( void )
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
	Derived( void ) : num3( 0 )
	{	}
	void setNum3(int num3)
	{
		this->num3 = num3;
	}
	void printRecord( void )
	{
		Base::printRecord();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
};
int main( void )
{
	Base* ptrBase = new Derived();

	ptrBase->setNum1(10);

	ptrBase->setNum2(20);

	Derived* ptrDerived = dynamic_cast<Derived*>( ptrBase );

	ptrDerived->setNum3(30);

	ptrDerived->printRecord();

	delete ptrDerived;

	return 0;
}
/*int main( void )
{
	Base baseInstance;
	Base& baseRef = baseInstance;

	baseRef.setNum1(10);
	baseRef.setNum2(20);
	Derived& derivedRef = dynamic_cast<Derived&>( baseRef );
	derivedRef.setNum3( 30 );
	derivedRef.printRecord();
	//Output : bad_cast
	return 0;
}*/
/*int main( void )
{
	Base* ptrBase = new Base( );
	ptrBase->setNum1(10);
	ptrBase->setNum2(20);
	Derived* ptrDerived = dynamic_cast<Derived*>( ptrBase );
	if( ptrDerived != NULL )
	{
		ptrDerived->setNum3(30);
		ptrDerived->printRecord();
		delete ptrDerived;
	}
	else
		cout<<"NULL"<<endl;
	return 0;
}*/
