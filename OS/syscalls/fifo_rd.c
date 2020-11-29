#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

// reader process
int main()
{
	int fd;
	char str[20];

	printf("waiting for the message ...\n");

	fd = open("dac_fifo", O_RDONLY);
	read(fd, str, sizeof(str));
	close(fd);

	printf("message received : %s\n", str);
	return 0;
}

	
