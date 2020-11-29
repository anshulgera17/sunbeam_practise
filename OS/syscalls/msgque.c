#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define MQ_KEY 0x2405

typedef struct mymsg
{
	long type;
	char str[20];
}mymsg_t;

int main()
{
	int ret, mqid, status;
	mqid = msgget(MQ_KEY, IPC_CREAT | 0600);
	ret = fork();
	if(ret==0)
	{	// child process -- sender
		mymsg_t m1, m4;
		printf("child : enter message : ");
		scanf("%s", m1.str);
		m1.type = 675;
		msgsnd(mqid, &m1, sizeof(m1), 0);
		
		printf("child waiting for the message ...\n");
		msgrcv(mqid, &m4, sizeof(m4), 346, 0);
		printf("child received : %s\n", m4.str);
	}
	else
	{	// parent process -- receiver
		mymsg_t m2, m3;
		printf("parent waiting for the message ...\n");
		msgrcv(mqid, &m2, sizeof(m2), 675, 0);
		printf("parent received : %s\n", m2.str);
		
		printf("parent : enter message : ");
		scanf("%s", m3.str);
		m3.type = 346;
		msgsnd(mqid, &m3, sizeof(m3), 0);
	
		wait(&status);

		msgctl(mqid, IPC_RMID, NULL);
	}
	return 0;
}



