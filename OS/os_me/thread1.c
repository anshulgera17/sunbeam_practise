#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void* increment(void* pa)
{
	int i;
	for(i=0;i<10;i++)
	{
	printf("inc: %d\n",i);
	sleep(1);
	}
return NULL;
}

void* decrement(void* pa)
	{
	int i;
	for(i=9;i>=0;i--)
	{
	printf("inc: %d\n",i);
	sleep(1);
	}
	return NULL;
}

int main(){
pthread_t it,dt;
int i;
pthread_create(&it,NULL,increment,NULL);
pthread_create(&dt,NULL,decrement,NULL);

for(i=0;i<10;i++)
{
printf("main:%d\n",i);
sleep(1);
}

return 0;
}
