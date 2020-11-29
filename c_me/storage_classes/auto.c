#include<stdio.h>
//int swap(int *c,int *d);
int main(){
/*static int a,b;
	int c;
c=a+b;
printf("%d",c);*/

int x,y;
	printf("enter no a");
	scanf("%d",&x);
	printf("enter no b");
	scanf("%d",&y);
//printf("%d\t %d",x,y);
swap(&x,&y);
printf("%d\t %d",x,y);


return 0;
}


/*
int swap(){

	int t;
	t=a;
	a=b;
	b=a;
return 0;
}
*/
