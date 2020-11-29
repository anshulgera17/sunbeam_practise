#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "this,is,an,example,of,strtok";
	char *ptr, *arr[32];
	int i;

	i=0;
	ptr = strtok(str, ",");
	arr[i++] = ptr;
	//printf("token : %s\n", ptr);
	
	do
	{
		ptr = strtok(NULL, ",");
		arr[i++] = ptr;
		//printf("token : %s\n", ptr);
	}while(ptr!=NULL);

	for(i=0; arr[i]!=NULL; i++)
		puts(arr[i]);
	return 0;
}

