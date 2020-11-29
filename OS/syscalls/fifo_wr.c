#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

// create fifo using mkfifo command...
//		mkfifo dac_fifo
//OR programmatically create fifo using mkfifo() syscall...
//		mkfifo("path", mode);	e.g. mkfifo("dac_fifo", 0600);

// writer process
int main()
{
	int fd;
	char str[20];
	printf("enter string : ");
	scanf("%s", str);

	fd = open("dac_fifo", O_WRONLY);
	write(fd, str, strlen(str)+1);
	close(fd);

	printf("message sent : %s\n", str);
	return 0;
}

	

