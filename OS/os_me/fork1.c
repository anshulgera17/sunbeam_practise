#include<stdio.h>
#include<unistd.h>
int main(){
int ret;
printf("program start!\n");
ret=fork();
if(ret==0){
printf("child:fork returned%d\n",ret);

printf("child:pid=%d\n",getpid());
printf("child:parent PID=%d\n",getppid());


}
else{
printf("parent:fork() returned:%d\n",ret);

printf("parent:PID=%d\n",getpid());
printf("parent:parent pid=%d\n",getppid());
}
printf("program end!\n");
}
