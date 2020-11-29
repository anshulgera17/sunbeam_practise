#include<cstdio>
int sum( int num1, int num2 )
{
	int result = num1 + num2;
	return result;
}
int sub( int num1, int num2 )
{
	int result = num1 - num2;
	return result;
}
int multiplication( int num1, int num2 )
{
	int result = num1 * num2;
	return result;
}
void print_record( int result )
{
	printf("Result	:	%d\n",result);
}
int menu_list( void )
{
	int choice;
	printf("0.Exit.\n");
	printf("1.Sum.\n");
	printf("2.Sub.\n");
	printf("3.Multiplication.\n");
	printf("Enter choice	:	");
	scanf("%d",&choice);
	return choice;
}
int main( void )
{
	int choice;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		int (*ptr)( int, int) = NULL;
		switch( choice )
		{
		case 1:
			ptr = sum;
			break;
		case 2:
			ptr = sub;
			break;
		case 3:
			ptr = multiplication;
			break;
		}
		if( ptr != NULL )
		{
			int result = ptr( 100, 20 );
			print_record( result );
		}
	}
	return 0;
}
