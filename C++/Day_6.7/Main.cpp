#include<iostream>
using namespace std;
namespace NInstanceCount
{
	class InstanceCount
	{
	private:
		static int count;
	public:
		InstanceCount( void )
		{
			++ InstanceCount::count;
		}
		static int getCount( void )
		{
			return InstanceCount::count;
		}
		~InstanceCount( void )
		{
			-- InstanceCount::count;
		}
	};
	int InstanceCount::count;
}
int main( void )
{
	using namespace NInstanceCount;
	InstanceCount obj1, obj2, obj3;

	cout<<"Instance Count	:	"<<InstanceCount::getCount()<<endl;
	return 0;
}
