#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


#define SERV_IP		"172.0.2.134"
#define SERV_PORT	3036

// client side
int main()
{
	int ret, cli_fd;
	struct sockaddr_in serv_addr;
	char buf[512];
	// create INET socket.
	cli_fd = socket(AF_INET, SOCK_STREAM, 0);
	// connect to server socket.
	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(SERV_PORT);
	serv_addr.sin_addr.s_addr = inet_addr(SERV_IP);
	ret = connect(cli_fd, (struct sockaddr*)&serv_addr, sizeof(serv_addr));
	do
	{
		// write to server
		printf("CLIENT : ");
		fgets(buf, sizeof(buf), stdin);
		write(cli_fd, buf, strlen(buf)+1);
		// read from server
		read(cli_fd, buf, sizeof(buf));
		printf("SERVER : %s", buf);
	}while(strcmp(buf, "bye\n")!=0);
	// close socket
	close(cli_fd);
	return 0;
}

