#include <stdio.h>
#include <unistd.h>
#include <signal.h>

//step1: implement signal handler function
void sigint_handler(int sig)
{
	printf("signal caught: %d\n", sig);
}

int main()
{
	int i=0;
	//step2: register signal handler with os
	signal(SIGINT, sigint_handler);

	while(1)
	{
		printf("running : %d\n", ++i);
		sleep(1);
	}
	return 0;
}

