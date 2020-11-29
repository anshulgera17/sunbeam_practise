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
	return NULL;
}

int main()
{
	pthread_t t1, t2, t3;
	int i;
	// create a thread
	pthread_create(&t1, NULL, increment, (void*)10);
	pthread_create(&t2, NULL, increment, (void*)15);
	pthread_create(&t3, NULL, increment, (void*)5);

	getchar();
	return 0;
}

