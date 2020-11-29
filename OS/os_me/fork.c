#include<stdio.h>
#include<unistd.h>

int main()
{
int ret;
printf("program start!\n");
ret=fork();
printf("fork returned :%d\n",ret);
printf("program end!\n");
return 0;
}
