#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define MQ_KEY 0x2405
typedef struct mymsg
{
long type;
char str[20];
}mymsg_t;

int main()
{
int ret,mqid,status;
mqid=msgget(MQ_KEY,IPC_CREAT|0600);

ret=fork();

if(ret==0)
{
mymsg_t m1;
printf("child:enter message:");
scanf("%s",m1.str);
m1.type=675;
msgsnd(mqid,&m1,sizeof(m1),0);

}

else
{
mymsg_t m2;
printf("parent waiting for the message...\n");
msgrcv(mqid,&m2,sizeof(m2),675,0);
printf("parent recived:%s\n",m2.str);
wait(&status);
msgctl(mqid,IPC_RMID,NULL);
}
return 0;
}
