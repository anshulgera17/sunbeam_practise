#include <stdio.h>
enum ops
{
	EXIT, ADD, SUBTRACT, MULTIPLY, DIVIDE
};
int main()
{
	int a, b, c;
	enum ops ch;
	do {
		printf("0. exit\n1. add\n2. subtract\n3. multiply\n4. divide\nenter choice : ");
		scanf("%d", &ch);
		printf("enter two numbers : ");
		scanf("%d%d", &a, &b);
		switch(ch)
		{
		case ADD:
			c = a + b;
			printf("result = %d\n", c);
			break;
		case SUBTRACT:
			c = a - b;
			printf("result = %d\n", c);
			break;
		// ...
		}
	} while(ch != EXIT);
}
