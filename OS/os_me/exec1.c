#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
int err,ret,status;
printf("parent start!\n");
ret=fork();
if(ret==0){
char *arr[]={"ls","-a","-l",NULL};
err
char *arr[]={"filesys.out",NULL};
err=execv("./filesys.out",arr);
if(err<0){
perror("exec failed");
_exit(1);
}

}
else
wait(&status);
printf("parent end!\n");
}
