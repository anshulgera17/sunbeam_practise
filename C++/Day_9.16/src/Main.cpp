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
	friend Point operator++( Point& pt1 );
	friend Point operator++( Point& pt1, int );
};
Point operator++( Point& pt1 )
{
	Point temp;
	temp.xPosition = ++ pt1.xPosition;
	temp.yPosition = ++ pt1.yPosition;
	return temp;
}
Point operator++( Point& pt1, int )
{
	Point temp;
	temp.xPosition = pt1.xPosition ++;
	temp.yPosition = pt1.yPosition ++;
	return temp;
}
int main( void )
{
	Point pt1(10, 20);
	//Point pt2 = ++ pt1;	//pt2 = operator++( pt1 );
	Point pt2 =  pt1 ++;	//pt2 = operator++( pt1, 0 );

	pt1.printRecord();
	pt2.printRecord();

	return 0;
}
