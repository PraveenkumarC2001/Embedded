#include<stdio.h>
int main()
{
	int a,b;
	while(1)
	{
		printf("\nselect number between 1 to 3   ",a);
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("hello");
				break;
			case 2:
				printf("hi");
				break;
			case 3:
				printf("ok");
				break;
			default:
				printf("invalid number");
				break;
		}
	}
}
