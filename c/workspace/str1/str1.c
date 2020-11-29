#include <stdio.h>
#include <string.h>

int astrlen(char s[]);
int pstrlen(char *s);
int main(void)
{
	char str[80];
	int res;
	printf("enter a string : ");
	scanf("%s", str);
	res = astrlen(str);
	printf("length = %d\n", res);
	res = pstrlen(str);
	printf("length = %d\n", res);
	res = strlen(str);
	printf("length = %d\n", res);
	return 0;
}

int astrlen(char s[])
{
	int i, cnt=0;
	for(i=0; s[i]!='\0'; i++)
		cnt++;
	return cnt;
}

int pstrlen(char *s)
{
	int cnt=0;
	while(*s != '\0')
	{
		cnt++;
		s++;
	}
	return cnt;
}
