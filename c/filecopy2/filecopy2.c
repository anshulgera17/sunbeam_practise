#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fs, *fd;
	char line[512];
	if(argc!=3)
	{
		printf("syntax: %s <src file> <dest file>\n", argv[0]);
		exit(1);
	}
	fs = fopen(argv[1], "r");
	if(fs == NULL)
	{
		perror("src file error");
		exit(2);
	}
	fd = fopen(argv[2], "w");
	if(fd == NULL)
	{
		perror("dest file error");
		exit(3);
	}
	while(fgets(line, sizeof(line), fs) != NULL)
		fputs(line, fd);
	fclose(fd);
	fclose(fs);
	printf("file copied.\n");
	return 0;
}
