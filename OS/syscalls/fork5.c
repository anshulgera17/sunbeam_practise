#include <stdio.h>
#include <unistd.h>

// zombie state

int main()
{
	int ret;
	int i;
	ret = fork();
	if(ret == 0)
	{
		for(i=0; i<20; i++)
		{
			printf("child: %d\n", i);
			sleep(1);
		}
	}
	else
	{
		for(i=0; i<40; i++)
		{
			printf("parent: %d\n", i);
			sleep(1);
		}
	}
	return 0;
}

