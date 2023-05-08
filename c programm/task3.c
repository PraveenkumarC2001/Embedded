#include<stdio.h>
int main()
{
	int a,b=0;
	printf("Enter your password ",a);
	scanf("%d",&a);
	while(1)
	{
		if(a==123)
		{
			printf("your password is correct");
			break;
		}
		if(a!=123)
		{
			if(b<6)
		{
			printf("\nenter your password again",a);
			scanf("%d",&a);
			b++;
		}
}
}
}
