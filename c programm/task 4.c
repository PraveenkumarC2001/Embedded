#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the how many stars to be printed ",a);
	scanf("%d",&a);
	
	for(a;a>0;a=a-1)
	{
		printf("\n%d",a);
	}
		for(b=a;b>0;)
		{
			printf("\t%d",a);
		}
}




