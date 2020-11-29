#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#define DB_FILE "open.txt"

void main()
{
char str[50];

int fd;
fd = open(DB_FILE, O_CREAT| O_WRONLY | O_APPEND , 0644);
if(fd<0)
{
perror("not opened");
_exit(1);
}

printf("enter string in file\n");

for(int i=0;i<=50;i++)
scanf("%c",&str[i]);

write(fd,str,sizeof(str));

read(fd,str,sizeof(str));

for(int i=0;i<50;i++)
printf("%c",str[i]);


}
