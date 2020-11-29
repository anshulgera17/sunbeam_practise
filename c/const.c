#include <stdio.h>

int main()
{
	const int a = 10;
	int *p = &a;
	//printf("a = %d\n", a);
	a = 10;
	//a++;	// error
	++*p;
	printf("a = %d\n", a);
	return 0;
}


