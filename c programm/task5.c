#include<stdio.h>
int main()
{
	int a,b;
	for(a=4;a>=0;a=a-1)
	{
		printf("\n  *",a);
		for(b=a;b--;)
		{
			printf("  *",b);
		}		
	}
}
