#include<stdio.h>
int main()
{
	int num;
	printf("enter any number",num);
	scanf("%d",&num);
	num=num%2;
	if(num==0)
	{
		printf("even");
		
	}
	else
	{
		printf("odd");
	}
}
