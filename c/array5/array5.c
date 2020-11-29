#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[] = {11, 22, 33, 44, 55};
	int *ptr = arr;
	printf("%d %d %d %d %d\n", *ptr, (*ptr)++, *ptr++, *++ptr, ++*ptr);
	return 0;
}
