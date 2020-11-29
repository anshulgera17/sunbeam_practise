#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void* inc(void* pr){
int i,max=(int)pr;
for(i=0;i<max;i++){
printf("%dthread:\n",i);
}
pthread_exit(NULL);

}

int main()
{
pthread_t t;
int i;
void *res;
pthread_create(&t,NULL,inc,(void*)10);
for(i=0;i<5;i++){
printf("main:%d\n",i);
sleep(1);
}

pthread_join(t,res);
printf("main ends!");
return 0;
}
