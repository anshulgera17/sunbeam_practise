#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
int arr[5];
sem_t s;

void* writee(void *pa){
int i;
while(1){
	sem_wait(&s);
	for(i=0;i<5;i++){
	arr[i]=rand() % 100;
	printf("WR:%d\n",arr[i]);
	sleep(1);
	}
	sem_post(&s);
	sleep(1);
}
return NULL;
}

void* reade(void *pa){
int i;
sleep(1);
while(1){
	sem_wait(&s);
	for(i=0;i<5;i++){

	printf("RD:%d\n",arr[i]);
	sleep(1);
	}
	sem_post(&s);
	sleep(1);
}
return NULL;
}

int main(){
pthread_t wt,rt;
sem_init(&s,0,1);
pthread_create(&wt,NULL,writee,NULL);
pthread_create(&rt,NULL,reade,NULL);
getchar();
sem_destroy(&s);
return 0;
}
