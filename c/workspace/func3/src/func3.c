#include <stdio.h>
#include <stdlib.h>
int b = 1; // global
void fun1()
{
	auto int a = 1; // local
	a++;
	printf("a = %d\n", a);
}
void fun2()
{
	//printf("%d\n", a); // error
	b++;
	printf("b = %d\n", b);
}
int main(void)
{
	extern int result;// declaration
	fun1();
	fun1();
	fun1();
	fun2();
	fun2();
	fun2();
	printf("result = %d\n", result);
	return 0;
}
int result = 100; // definition

