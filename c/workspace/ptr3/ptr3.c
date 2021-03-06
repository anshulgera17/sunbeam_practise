#include <stdio.h>
#include <stdlib.h>

// if two eles are same return 0.
// if 1st is greater return +ve values, else return -ve value.
int comp_int(void *e1, void *e2)
{
	int *p1 = (int*)e1;
	int *p2 = (int*)e2;
	return *p1 - *p2;
}

int main(void)
{
	int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int index, key = 17, *ptr;
	ptr = bsearch(&key, arr, 9, sizeof(int), comp_int);
	if(ptr==NULL)
		printf("not found.\n");
	else
		printf("found at index : %d\n", ptr - arr);
	return 0;
}
