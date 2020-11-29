#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/ipc.h>
#include<sys/shm.h>

#define SHM_KEY 0x2405
typedef struct shm
{
int cnt;
}shm_t;

int main(){
int i ,ret,status;
int shmid;
shm_t *ptr;
shmid=shmget(SHM_KEY,sizeof(shm_t),IPC_CREAT|0600);
ptr->cnt=0;
shmctl(shmid,IPC_RMID,NULL);
ret=fork();
if(ret==0)
{
for(i=0;i<10;i++){
ptr->cnt++;
printf("child:%d\n",ptr->cnt);
sleep(1);
}
}
else
{
for(i=0;i<10;i++){
ptr->cnt--;
printf("child:%d\n",ptr->cnt);
sleep(1);
}
wait(&status);
printf("final count:%d\n",ptr->cnt);
}
shmdt(ptr);
return 0;
}
