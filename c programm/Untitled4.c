#include<stdio.h>
#include<string.h>
int main()
{
	char ch[30];
	printf("enter your name:",ch);
	scanf("%s",ch);
	printf("\n the length is %d ",strlen(ch));
	printf("\n the reverse is %s",strrev(ch));
}
