#include<iostream>
using namespace std;

class Point
{
private:
	int xPosition;
	int yPosition;
public:
	Point( void )
	{
		this->xPosition = 0;
		this->yPosition = 0;
	}
	Point( int xPosition, int yPosition )
	{
		this->xPosition = xPosition;
		this->yPosition = yPosition;
	}
	void printRecord( void )
	{
		cout<<"X Position	:	"<<this->xPosition<<endl;
		cout<<"Y Position	:	"<<this->yPosition<<endl;
	}
	friend Point operator+( Point& pt1, Point& pt2 );
};
Point operator+( Point& pt1, Point& pt2 )
{
	Point temp;
	temp.xPosition = pt1.xPosition + pt2.xPosition;
	temp.yPosition = pt1.yPosition + pt2.yPosition;
	return temp;
}
int main( void )
{
	Point pt1(10, 20);
	Point pt2(30, 40);
	Point pt3;

	pt3 = pt1 + pt2;	// pt3 = operator+( pt1, pt2 );

	pt3.printRecord();
	return 0;
}
