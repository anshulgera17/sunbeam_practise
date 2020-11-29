#include<iostream>
#include<new>
using namespace std;

class Array{
private:
	int *arr,index;
	size_t max;
public:
Array(void)
{
		cout<<"enter no of elements for array"<<endl;
			cin>>max;
			this->arr = new int[max];
}
void accept(void)
{
		cout<<"enter element in array"<<endl;
			for(index=0;index<max;index++)
				cin>> arr[index];
			cout<<"array of: "<<max<<endl;
			for(index=0;index<max;index++)
				cout<<arr[index]<<endl;
	}

};
int main()
{
	Array a;
	a.accept();
return 0;
}
