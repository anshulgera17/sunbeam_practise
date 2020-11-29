#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// when main thread terminates, process terminates.
// when process terminates, all its threads are terminated.


// implement thread function
void* increment(void* param)
{
	int i, max = (int)param;
	for(i=0; i<max; i++)
	{
		printf("inc : %d\n", i);
		sleep(1);
	}
	return NULL;
}

int main()
{
	pthread_t t1;
	int i;
	// create a thread
	pthread_create(&t1, NULL, increment, (void*)10);
	for(i=0; i<5; i++)
	{
		printf("main: %d\n", i);
		sleep(1);
	}
	return 0;
}

