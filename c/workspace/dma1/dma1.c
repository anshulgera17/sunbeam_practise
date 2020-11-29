#include <stdio.h>
#include <stdlib.h>

// calc avg of all numbers.

int main(void)
{
	int i, cnt, sum;
	int *arr;
	float avg;
	printf("how many numbers ? ");
	scanf("%d", &cnt);
	arr = (int*) malloc(cnt * sizeof(int));
	free(arr);
	printf("enter %d elements : ", cnt);
	for(i=0; i<cnt; i++)
		scanf("%d", &arr[i]);
	sum = 0;
	for(i=0; i<cnt; i++)
		sum = sum + arr[i];
	avg = (float) sum / cnt;
	printf("avg : %f\n", avg);
	arr = NULL;
	return 0;
}
