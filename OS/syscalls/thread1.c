#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// compile: gcc thread1.c -o thread.out -lpthread
// run:		./thread.out


// implement thread function
void* increment(void* param)
{
	int i;
	for(i=0; i<10; i++)
	{
		printf("inc : %d\n", i);
		sleep(1);
	}
	return NULL;
}

void* decrement(void* param)
{
	int i;
	for(i=9; i>=0; i--)
	{
		printf("dec : %d\n", i);
		sleep(1);
	}
	return NULL;
}

int main()
{
	pthread_t it, dt;
	int i;
	// create a thread
	pthread_create(&it, NULL, increment, NULL);
	pthread_create(&dt, NULL, decrement, NULL);

	for(i=0; i<10; i++)
	{
		printf("main: %d\n", i);
		sleep(1);
	}
	return 0;
}

