#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// implement thread function
void* increment(void* param)
{
	int i, max = (int)param;
	for(i=0; i<max; i++)
	{
		printf("inc : %d\n", i);
		sleep(1);
	}
	pthread_exit(NULL);	// terminate current thread
	//return NULL;
}

int main()
{
	pthread_t t1;
	int i;
	void *res;
	// create a thread
	pthread_create(&t1, NULL, increment, (void*)10);
	for(i=0; i<5; i++)
	{
		printf("main: %d\n", i);
		sleep(1);
	}
	printf("main is waiting.\n");
	// calling thread waits for given thread.
	pthread_join(t1, &res);
	printf("main ends.\n");
	return 0;
}

