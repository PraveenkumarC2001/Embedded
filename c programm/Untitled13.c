#include<stdio.h>
void number();
void main()
{
	printf("Going to execute the arithmetic operations");
	number();
}
void number()
{
	int a,b;
	printf("\nenter two numbers:");
	scanf("%d%d",&a,&b);
	
	printf("\nthe sum of two numbers are %d",a+b);
	printf("\nthe difference of two numbers are %d",a-b);
	printf("\nthe multiplication of two numbers is %d",a*b);
	printf("\nthe divison of two numbers is %d",a/b);
	printf("\nthe modules of two numbers is %d",a%b);
}

