#include<stdio.h>
#include<string.h>
int main()
{
	char n[10];
	int i,count;
	printf("enter any sentence in which vowels should me found ");
	gets(n);
	printf("the length of string is %d",strlen(n));
	i=0;
	count=0;
	while(i<=strlen(n)) {
		if(n[i]=='a'|| n[i]=='e'|| n[i]=='i'||n[i]=='o'||n[i]=='u') {
			count++;
			
}
	i++;
}
	printf("\nthe vowles are %d",count);
}
