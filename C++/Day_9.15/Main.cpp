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
	friend void operator+=( Point& pt1, Point& pt2 );
};
void operator+=( Point& pt1, Point& pt2 )
{
	pt1.xPosition += pt2.xPosition;
	pt1.yPosition += pt2.yPosition;
}
int main( void )
{
	Point pt1(10, 20);
	Point pt2(10, 20);
	pt1 += pt2;	//operator+=( pt1, pt2 );
	pt1.printRecord();
	return 0;
}
