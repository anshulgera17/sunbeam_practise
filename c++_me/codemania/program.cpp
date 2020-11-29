#include<stdio.h>
#include<string.h>
int main(){
char S[50];
int l,i,ch;
printf("Enter the string \n");
gets(S);
for(l=0;S[l];l++);
	for(i=0;i<(l/2);i++){
		ch=S[i];
		S[i]=S[l-1-i];
		S[l-1-i]=ch;
	}
	printf("Reverse is\n %s",S);
return 0;
}

