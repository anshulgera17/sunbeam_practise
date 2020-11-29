#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	printf("argv[0] : %s\n\n", argv[0]);
	for(i=0; i<argc; i++)
		puts(argv[i]);
	printf("\nargv[argc] : %s\n", argv[argc]);
	return 0;
}

// gcc cmdline.c -o cmdline.out
// ./cmdline.out one two three four 

