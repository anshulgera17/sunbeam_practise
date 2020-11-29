#include <stdio.h>
#include <unistd.h>

int cnt = 0;

int main()
{
	int i, ret;
	ret = fork();
	if(ret == 0)
	{
		for(i=0; i<10; i++)
		{
			cnt++;
			printf("child : %d\n", cnt);
			sleep(1);
		}
	}
	else
	{
		for(i=0; i<10; i++)
		{
			cnt--;
			printf("parent: %d\n", cnt);
			sleep(1);
		}
	}
	return 0;
}

