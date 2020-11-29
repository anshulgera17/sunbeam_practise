#include <stdio.h>
#include <unistd.h>

int main()
{
	int ret;
	printf("program start!\n");
	ret = fork();
	if(ret == 0)
	{	// child process
		printf("child: fork() returned : %d\n", ret);
		printf("child: PID = %d\n", getpid());
		printf("child: Parent PID = %d\n", getppid());
	}
	else
	{	// parent process
		printf("parent: fork() returned : %d\n", ret);
		printf("parent: PID = %d\n", getpid());
		printf("parent: Parent PID = %d\n", getppid());
	}
	printf("program end!\n");
	return 0;
}

