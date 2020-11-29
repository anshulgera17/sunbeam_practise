#include<iostream>
using namespace std;
class Outer
{
public:
	class Inner		//Nested class
	{
		//TODO
	};
};
int main( void )
{
	Outer out;

	Outer::Inner in;
	return 0;
}
