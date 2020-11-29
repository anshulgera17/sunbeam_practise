#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

#include"../include/Rectangle.h"
#include"../include/Circle.h"
#include"../include/ShapeFactory.h"
using namespace NShape;

void accept_record( Shape* ptrShape ) throw( Exception )
{
	if( dynamic_cast<Rectangle*>( ptrShape ) != NULL )
	{
		Rectangle* ptrRect = dynamic_cast<Rectangle*>( ptrShape );
		float length;
		cout<<"Length	:	";
		cin>>length;
		ptrRect->setLength( length );

		float breadth;
		cout<<"Breadth	:	";
		cin>>breadth;
		ptrRect->setBreadth(breadth );
	}
	else
	{
		Circle* ptrCircle = dynamic_cast<Circle*>( ptrShape );
		float radius;
		cout<<"Radius	:	";
		cin>>radius;
		ptrCircle->setRadius( radius );
	}
}
void print_record( Shape* ptrShape )
{
	float area = ptrShape->getArea();
	string name = typeid( *ptrShape ).name();
	cout<<"Area of instance of "<<name<<" is "<<area<<endl;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Rectangle."<<endl;
	cout<<"2.Circle"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		try
		{
			Shape* ptrShape = ShapeFactory::getInstance(choice )
			if( ptrShape != NULL )
			{
				::accept_record( ptrShape );
				ptrShape->calculateArea();
				::print_record( ptrShape );
				delete ptrShape;
			}
		}
		catch( bad_alloc& ex )
		{
			cout<<ex.what()<<endl;
		}
		catch( Exception& ex)
		{
			cout<<ex.getMessage()<<endl;
		}
	}
	return 0;
}
