#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	int err, ret, status;
	printf("parent start!\n");
	ret = fork();
	if(ret == 0)
	{
		//char *arr[] = { "ls", "-a", "-l", NULL };
		//err = execv("/bin/ls", arr);
		//char *arr[] = { "cal", "-y", "2017", NULL };
		//err = execv("/usr/bin/cal", arr);
		char *arr[] = { "mem.out", NULL };
		err = execv("./mem.out", arr);
		if(err < 0)
		{
			perror("exec() failed");
			_exit(1);
		}
	}
	else
		wait(&status);
	printf("parent end!\n");
	return 0;
}

