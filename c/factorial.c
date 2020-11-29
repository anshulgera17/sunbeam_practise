#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int res, num, i;
	if(argc!=2)
	{
		printf("syntax: ./factorial.out <num>\n");
		exit(1);
	}
	num = atoi(argv[1]);
	res = 1;
	for(i=1; i<=num; i++)
		res = res * i;
	printf("%d! = %d\n", num, res);
	return 0;
}

// gcc factorial.c -o factorial.out
// ./factorial.out 5

//	argc = 2
//	argv[0] = "name of exe"
//	argv[1] = "5"


