#include <stdio.h>

typedef unsigned int uint_t;
uint_t a = 10;
unsigned int b = 20;

// funptr_t is new name to the data type
// "pointer to the function taking 2 int args & returning void"
typedef void (*funptr_t)(int,int);

// function pointer
void sum(int a, int b)
{
	int c = a + b;
	printf("sum = %d\n", c);
}

void subtract(int a, int b)
{
	int c = a - b;
	printf("subtract = %d\n", c);
}

int main(void)
{
	// declaration of func ptr var: ptr is pointer to the block of instrs
	// i.e. function taking two int args and returning void
	// declaration of func pointer
	//void (*ptr)(int,int);
	// declaration of func pointer using typedef
	funptr_t ptr;
	// initialization of func ptr var
	ptr = subtract;
	// call func using func ptr
	ptr(12, 4);
		// push 4
		// push 12
		// call [ptr]
		// pop bx
		// pop bx

	sum(12, 4);
		// push 4
		// push 12
		// call addr_sum
		// pop bx
		// pop bx
	return 0;
}
