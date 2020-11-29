#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	char str[512];
	char *ptr, *arr[32];
	int i, ret, err, status;

	while(1)
	{
		// input cmd from user and split it into tokens array
		printf("cmd> ");
		gets(str);
		i=0;
		ptr = strtok(str, " ");
		arr[i++] = ptr;
		do {
			ptr = strtok(NULL, " ");
			arr[i++] = ptr;
		} while(ptr!=NULL);
		
		// if it is internal command, implement corresponding logic in program itself.
		if(strcmp(arr[0], "exit") == 0)
			_exit(0);
		else if(strcmp(arr[0], "cd") == 0)
			chdir(arr[1]);
		else // if it is external command, execute it with fork() & exec().
		{
		ret = fork();
		if(ret == 0)
		{
			err = execvp(arr[0], arr);
			if(err < 0)
			{
				perror("bad command");
				_exit(1);
			}
		}
		else
			wait(&status);
		}
	}
	return 0;
}

// char *arr[] = { "ls", "-l", "-a", "/home", NULL };
// execv("/bin/ls", arr);

// execl("/bin/ls", "ls", "-l", "-a", "/home", NULL);

// execlp("ls", "ls", "-l", "-a", "/home", NULL);
// execvp("ls", arr);

// execle("exe_path", ..., NULL, envp);
// execve("exe_path", args, envp);	<-- syscall

// execvpe("exe_name", args, envp);







