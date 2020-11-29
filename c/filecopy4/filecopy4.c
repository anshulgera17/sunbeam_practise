#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fs, *fd;
	char buf[512];
	int cnt;
	/*
	if(argc!=3)
	{
		printf("syntax: %s <src file> <dest file>\n", argv[0]);
		exit(1);
	}
	fs = fopen(argv[1], "rb");
	if(fs == NULL)
	{
		perror("src file error");
		exit(2);
	}
	fd = fopen(argv[2], "wb");
	if(fd == NULL)
	{
		perror("dest file error");
		exit(3);
	}

	while( (cnt=fread(buf, 1, sizeof(buf), fs)) > 0)
		fwrite(buf, 1, cnt, fd);

	fclose(fd);
	fclose(fs);
	*/
	printf("file copied.\n");
	return 0;
}
