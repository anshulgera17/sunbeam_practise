#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void* increment(void* pm){
int i,max=(int)pm;
for(i=0;i<max;i++){
printf("thread hai ya:%d\n",i);
sleep(1);
}
return NULL;
}

int main()
{

pthread_t p,q,r;
int i;
pthread_create(&p,NULL,increment,(void*)10);
pthread_create(&q,NULL,increment,(void*)15);
pthread_create(&r,NULL,increment,(void*)5);


getchar();
return 0;
}
