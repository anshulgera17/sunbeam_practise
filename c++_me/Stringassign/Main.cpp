#include<cstring>
#include<iostream>
using namespace std;

class String{
private:
	char *arr;
	int len;

public:
	String(void){

		cout<<"enter length for string array"<<endl;
		cin>>len;
	this->arr =new char[len];
	}

	void getStringArray()
	{
		cout<<"enter string :"<<endl;
	for(int index=0;index<=len;++index)
		cin>>arr[index];
	}

	void printStringArray()
	{
			cout<<"String is :"<<endl;
		for(int index=0;index<=len;++index)
			cout<<arr[index];
		}

	void strlen()
	{
	int	count=0;
		for(int index=0;index<len;index++)
			count++;
		cout<<endl;
		cout<<"length of string is:"<<count<<endl;
	}
	void strrev()
	{
		cout<<"Reversed String :"<<endl;
		for(int index=len;index>=0;index--)
			cout<<arr[index];
	}
/*void strupr(){

	for(int index=0;index<len;index++)


}
void strlwr(){

}
*/
	~String(void)
		{
	    delete arr;
	    arr=NULL;
		}
};

int main(){
	String s;
	s.getStringArray();
	s.printStringArray();
	s.strlen();
	s.strrev();
	//s.strupr();
	//s.strlwr();
	return 0;
}
