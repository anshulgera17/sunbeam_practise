#include<stdio.h>
int main(void){
	int sum(int a,int b);
	/*
typedef unsigned int unit_t;
unit_t a=10;
unit_t b=20;
unit_t c;
c=a+b;
printf("%u",c);
*/
	int ptr;
	//typedef void (*funptr_t)(int,int);
sum(1,2);
}

int sum(int a,int b)
{
	int c=a+b;
	printf("sum=%d\n",c);
	return 0;
}
