#include <stdio.h>

int sum(int a, int b);

int main()
{
	int res, x=10, y=20;
	res = sum(x, y); // x, y --> actual args
	printf("%d\n", res);
	return 0;
}

int sum(int a, int b) // a,b --> formal args
{
	int c = a + b;
	return c;
}
