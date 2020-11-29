#include<iostream>
#include<string>
using namespace std;
class Matrix
{
private:
	int **arr;
	int row;
	int col;
public:
Matrix(void)
{
cout<<"enter rows and cols for matrix"<<endl;
cin>>row;
cin>>col;

this-> arr= new int*[this->row];
for(int i = 0; i < this->row; ++i)
    this->arr[i] = new int[this->col];

	}

void getMatrixElement(){

for(int i=0;i<row;i++)
{

	for(int j=0; j<col; ++j)
	{
		cin>>arr[i][j];
	}
}
}
void printMatrixElement(){
	for(int i=0;i<row;++i)
	{

		for(int j=0; j<col; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
	cout<<endl;
	}
}

/*Matrix operator+(Matrix &other){

}*/
~Matrix(void){
	for(int i=0;i<this->row;i++){
		delete[] this->arr[i];
		delete[] this->arr;
		this->arr=NULL;
	}
}
};


int menu_list(void)
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.ADD matrix"<<endl;
	cout<<"2.SUB matrix"<<endl;
	cin>>choice;
	try
	{
				if(choice>2 || choice<0)
				{
					string s("this is invalid choice please re-enter");
					throw s;
				}
				else{
					return choice;
				}
	}
				catch(string &s){
					cout<<s<<endl;
				}

}

int main(){
	Matrix m,n,mat;
	m.getMatrixElement();
	m.printMatrixElement();
	n.getMatrixElement();
	n.printMatrixElement();

	int choice;
	while((choice=menu_list())!=0){
		switch(choice)
		{
		case 1:
			//mat=m+n;
		//	mat.printMatrixElement();
			break;
		case 2:
		//	mat=m+n;
		//	mat.printMatrixElement();
			break;
		}
	}


	return 0;
	//delete[] arr[];

}
