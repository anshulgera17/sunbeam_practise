#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void* inc(void* pm){
int i,max=(int)pm;

for(i=0;i<max;i++){
printf("%d\n",i);
sleep(1);
}
return NULL;
}

int main(){
pthread_t p;
int i;

pthread_create(&p,NULL,inc,(void*)10);
for(i=0;i<5;i++)
{
printf("%d\n",i);
sleep(1);
}
return 0;
}
