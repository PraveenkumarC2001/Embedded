#include<stdio.h>
int main()
{
	int a,b=0;
	printf("Enter your password ",a);
	scanf("%d",&a);
	if(a==123)
	{
		printf("your password is correct");
	}
	
	while(a!=123)
	{
		b=0;
		while(b<6)
		{
			printf("passord in incorrect ");
			printf("enter your password again ",a);
			scanf("%d",&a);
			b+1;
			if(a==123)
			printf("your password is correct");	
	}
}
}
