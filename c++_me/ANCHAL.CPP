#include<iostream>
#include <stdio.h>
#include <conio.h>
char display();
char ch,name[20];

void display2();
void filling();
void showtt(int);

int i=0,j,k,p,Clas,day,search;
int N;   //for numberas of teachers

 int arr[50][50][7];

  void main()
 {

  clrscr();
  char CH;
  CH = display();   //for switch
  switch(CH)
  {
    case'1':   int teacherno[10];
	       cout<<"Success\n";
	       cout<<"For how many teachers do you wnat to enter:";
	       cin>>N;
	       for(p = 0;p < N; p++)
	       {
	       cout<<"\nEntery for teachers:"<<p+1;
	       cin>>teacherno[p];
	       cout<<"\nEnter teachers number(1 for first teacher,.......etc)  :";

	       display2();

	       k=day-1;

	       filling();
	       cout<<"\n\n";
	       cout<<N<<":- value of N";
	       cout<<"\nDO YOU WANT TO SEARCH FOR ANY TEACHER(1=yes||2=no)";
	       cin>>search;
	       if(search==1)
	       {
		 cout<<"enter teacherno to be search for ";
		 cin>>search;
		 for(p=0; p<N; p++)
		 {
		  if(search==teacherno[p])
		   cout<<teacherno[p];
		 }
	       }
	     }
    }

  getch();
 }


 char display()
 {
 cout<<"\t\t\tHellow user"<<endl<<endl;
 cout<<"\t\t\t:Project for Arrangement:\n" ;
 cout<<"Mean Meanu\n\n";
 cout<<"1.master entry\n";
 cout<<"2.aAAAAA\n";
 cin>>ch;
 return ch;
 }

 void display2()
 { cout<<"\n1.Monday"<<"\n2.Tuesday"<<"\n3.Wednesday"<<"\n4.Thursday"<<"\n5.Friday"<<"\n6.Saturday";
   cout<<"\nEnter for which day entery is:";
   cin>>day;
 }

 void filling()
 {
      for(i=0;i<7;i++)
      {
		 for(j=0;j<12;j++)
		  {
		  arr[i][j][k]=j+1;
		  }
      }
      for(i=0;i<7;i++)       //cheaking2
       {
	 cout<<endl;
	 for(j=0;j<12;j++)
	 {
		cout<<arr[i][j][k];
	 }
       }
		 for(i=0;i<7;i++)
	       {
		 cout<<"\In which class is your"<<i+1<<" period:";
	       cin>>Clas;

		  for(j=0;j<12;j++)
		 {  if(arr[i][j][k]==Clas)
		     arr[i][j][k]=1;
		     else
		     arr[i][j][k]=0;
		  }
	       }
	       for(i=0;i<7;i++)       //cheaking2
		{ cout<<endl;

		 for(j=0;j<12;j++)
		 {cout<<arr[i][j][k];
		 }
		}
	   showtt(k);

 }
 void showtt(int k)
 {           i=0;
	      for(j=0;j<12;j++)
		 {if(arr[i][j][k]==1)
		 cout<<"\nYour first period at class:"<<j+1;
		 }

		  i=1;
	      for(j=0;j<12;j++)
		 {if(arr[i][j][k]==1)
		 cout<<"\nYour second period at class:"<<j+1;
		 }
		  i=2;
	      for(j=0;j<12;j++)
		 {if(arr[i][j][k]==1)
		 cout<<"\nYour third period at class:"<<j+1;
		 } i=3;
	      for(j=0;j<12;j++)
		 {if(arr[i][j][k]==1)
		 cout<<"\nYour fourth period at class:"<<j+1;
		 } i=4;
	      for(j=0;j<12;j++)
		 {if(arr[i][j][k]==1)
		 cout<<"\nYour fifth period at class:"<<j+1;
		 } i=5;
	      for(j=0;j<12;j++)
		 {if(arr[i][j][k]==1)
		 cout<<"\nYour sixth period at class:"<<j+1;
		 } i=6;
	      for(j=0;j<12;j++)
		 {if(arr[i][j][k]==1)
		 cout<<"\nYour seventh period at class:"<<j+1;
		 }

   }
