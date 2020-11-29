#include <stdio.h>
#include <stdlib.h>

void print(int (*a)[4]);

int main(void)
{
	int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	// ptr is pointer to the block of 4 ints (array).
	int (*ptr)[4];
	printf("&arr+1 = %u\n", &arr+1);
	printf("arr+1 = %u\n", arr+1);
	printf("*arr+1 = %u\n", *arr+1);
	printf("**arr+1 = %u\n", **arr+1);

	printf("%d\n", arr[2][-5]);
	ptr = arr; //ptr = &arr[0];
	printf("arr=%u\n", arr);
	printf("arr+1=%u\n", arr+1);
	printf("*(arr+1)=%u\n", *(arr+1));
	printf("*(arr+1)+2=%u\n", *(arr+1)+2);
	printf("*(*(arr+1)+2)=%u\n", *(*(arr+1)+2));

	printf("ptr=%u\n", ptr);
	printf("ptr+1=%u\n", ptr+1);
	printf("*(ptr+1)=%u\n", *(ptr+1));
	printf("*(ptr+1)+2=%u\n", *(ptr+1)+2);
	printf("*(*(ptr+1)+2)=%u\n", *(*(ptr+1)+2));
	printf("%d\n", ptr[1][2]);

	print(arr);
	return 0;
}

//void print(int a[][4])
void print(int (*a)[4])
{
	printf("sizeof(a) = %d\n", sizeof(a));
}

