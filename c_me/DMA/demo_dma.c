/*
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int sum=0,cnt,i;
	int *arr;

	float avg;
	printf("how many numbers");
	scanf("%d",&cnt);
	arr=(int *)malloc(cnt * sizeof(int));
	printf("enter %d elements :",cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d",&arr[i]);
	sum=sum+arr[i];
	}
	avg=(float)sum/cnt;
	printf("avg%f\n",avg);
	free(arr);
	arr=NULL;
	return 0;
}
*/
