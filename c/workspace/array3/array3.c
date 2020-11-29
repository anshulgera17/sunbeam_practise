#include <stdio.h>
#include <stdlib.h>

void print(int a[][4]);

int main(void)
{
	int arr[3][4] =
			{
				{1, 2},
				{11},
				{10, 20, 30}
			};
	print(arr);
	return 0;
}

void print(int a[][4])
{
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}
