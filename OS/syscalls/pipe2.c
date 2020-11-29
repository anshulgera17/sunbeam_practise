#include <stdio.h>
#include <unistd.h>

#define RD 0
#define WR 1

int main()
{
	int ret, arr[2];
	char str[20], buf[20];
	pipe(arr);
	ret = fork();
	if(ret == 0)
	{	// child: writer
		close(arr[0]);
		printf("child: enter string : ");
		scanf("%s", buf);
		write(arr[1], buf, sizeof(buf));
		close(arr[1]);
	}
	else
	{	// parent: reader
		close(arr[1]);
		read(arr[0], str, sizeof(str));
		printf("parent: read from pipe: %s\n", str);
		close(arr[0]);
	}
	return 0;
}



