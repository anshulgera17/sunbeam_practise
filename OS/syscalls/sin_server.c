#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/socket.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define SERV_IP		"172.0.2.134"
#define SERV_PORT	3036

void sigint_handler(int sig)
{
	printf("SIGINT received.\n");	
}

// server side
int main()
{
	int ret, serv_fd, cli_fd;
	socklen_t sock_len;
	struct sockaddr_in serv_addr, cli_addr;
	char buf[512];
	
	struct sigaction sa;
	memset(&sa, 0, sizeof(sa));
	sa.sa_handler = sigint_handler;
	ret = sigaction(SIGINT, &sa, NULL);

	// create INET socket.
	serv_fd = socket(AF_INET, SOCK_STREAM, 0);
	// bind socket to ip addr & port.
	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(SERV_PORT);
	serv_addr.sin_addr.s_addr = inet_addr(SERV_IP);
	ret = bind(serv_fd, (struct sockaddr*)&serv_addr, sizeof(serv_addr));
	// listen to socket connections.
	listen(serv_fd, 5);
	// accept the socket connection.
	memset(&cli_addr, 0, sizeof(cli_addr));
	sock_len = sizeof(cli_addr);
	cli_fd = accept(serv_fd, (struct sockaddr*)&cli_addr, &sock_len);
	if(cli_fd < 0)
	{
		perror("accept() failed");
		_exit(0);
	}
	do
	{
		// read from client
		read(cli_fd, buf, sizeof(buf));
		printf("CLIENT : %s", buf);
		// write to client
		printf("SERVER : ");
		fgets(buf, sizeof(buf), stdin);
		write(cli_fd, buf, strlen(buf)+1);
	}while(strcmp(buf, "bye\n")!=0);
	// close socket
	close(cli_fd);
	// shutdown socket
	shutdown(serv_fd, SHUT_RDWR);
	return 0;
}


