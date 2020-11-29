#include <stdio.h>

int main()
{
	int ch;
	while((ch=fgetc(stdin))!=-1)
		putchar(ch);
	return 0;
}

