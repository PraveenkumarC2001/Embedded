#include<stdio.h>
int main()
{
	int*a[5]={2,4,8,10,12};
	*a[2]=13;
	printf("value is %d",*a[2]);
}
