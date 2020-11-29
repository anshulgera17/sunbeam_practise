#include <stdio.h>
#include <string.h>

int main()
{
	char ch, str[] = "this is an example string";
	char *ptr;
	printf("enter char to search : ");
	ch = getchar();
	ptr = str;
	while( (ptr = strchr(ptr, ch)) != NULL )
	{
		if(ptr!=NULL)
			printf("index : %d\n", ptr-str);
		ptr++;
	}
	return 0;
}
