#include <stdio.h>
#include <stdlib.h>
void fun(int a[]);
int main(void)
{
	int arr[5] = {11, 22, 33, 44, 55};
	int i;
	//int *ptr = &arr[0];
	int *ptr = arr;

	printf("*arr = %d\n", *arr);
	printf("arr = %u\n", arr);
	printf("&arr = %u\n", &arr);
	printf("*arr + 1 = %d\n", *arr + 1);
	printf("arr + 1 = %u\n", arr + 1);
	printf("&arr + 1 = %u\n", &arr + 1);

	printf("sizeof(arr) : %d\n", sizeof(arr));
	printf("sizeof(ptr) : %d\n", sizeof(ptr));

	for(i=0; i<5; i++)
		printf("arr[i] = %d\n", arr[i]);
	for(i=0; i<5; i++)
		printf("*(arr+i) = %d\n", *(arr+i));
	for(i=0; i<5; i++)
		printf("*(i+arr) = %d\n", *(i+arr));
	for(i=0; i<5; i++)
		printf("i[arr] = %d\n", i[arr]);

	for(i=0; i<5; i++)
		printf("ptr[i] = %d\n", ptr[i]);
	for(i=0; i<5; i++)
		printf("*(ptr+i) = %d\n", *(ptr+i));
	for(i=0; i<5; i++)
		printf("*(i+ptr) = %d\n", *(i+ptr));
	for(i=0; i<5; i++)
		printf("i[ptr] = %d\n", i[ptr]);

	ptr = arr;
	for(i=0; i<5; i++)
	{
		printf("*ptr = %d\n", *ptr);
		ptr++;
	}

	for(i=0; i<5; i++)
	{
		printf("*arr = %d\n", *arr);
		//arr++;
	}

	fun(arr);
	return 0;
}

void fun(int a[])
//void fun(int *a)
{
	int i;
	printf("sizeof(a) = %d\n", sizeof(a));
	for(i=0; i<5; i++)
		printf("%d\n", *(a+i));
}


