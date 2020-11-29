#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

// wait(&status);
//	

int main()
{
	int ret;
	int i, status;
	ret = fork();
	if(ret == 0)
	{
		for(i=0; i<20; i++)
		{
			printf("child: %d\n", i);
			sleep(1);
		}
		_exit(6);
	}
	else
	{
		for(i=0; i<40; i++)
		{
			printf("parent: %d\n", i);
			sleep(1);
			if(i==20)
			{
				wait(&status);
				printf("child exit value : %d\n", WEXITSTATUS(status));
			}
		}
	}
	return 0;
}

