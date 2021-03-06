#include <stdio.h>

int main(void)
{
	char c = 'A';
	int a = 10;
	char *cp = &c;
	int *p;
	int **pp;
	p = &a;
	pp = &p;
	printf("sizeof(a) = %u\n", sizeof(a));
	printf("sizeof(p) = %u\n", sizeof(p));
	printf("sizeof(pp) = %u\n", sizeof(pp));
	printf("sizeof(c) = %u\n", sizeof(c));
	printf("sizeof(cp) = %u\n", sizeof(cp));

	printf("&p = %u\n", &p); // 200
	printf("p = %u\n", p); // 100
	printf("*p = %u\n", *p); // 10
	printf("&pp = %u\n", &pp); // 300
	printf("pp = %u\n", pp); // 200
	printf("*pp = %u\n", *pp); // 100
	printf("**pp = %u\n", **pp); // 10
	//printf("***pp = %u\n", ***pp); // error

	printf("cp = %u\n", cp);
	printf("cp+1 = %u\n", cp+1);
	printf("p = %u\n", p);
	printf("p+1 = %u\n", p+1);

	return 0;
}


