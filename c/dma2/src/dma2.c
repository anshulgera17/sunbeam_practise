#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int *arr = (int*)malloc(3 * sizeof(int));
	for(i=0; i<=3; i++)
		arr[i] = i;
	free(arr);
	return 0;
}
