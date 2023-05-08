#include<stdio.h>
int main()
{
	int i=0,j=0,k=0;
	int array[2][2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("enter numbers [%d][%d][%d]....\n",i,j,k);
				scanf("%d",&array[i][j][k]);
		}
	}
}
	printf("\n the elements ....\n");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
			{
				printf("%d\t",array[i][j][k]);
					for(k=0;k<2;k++)
						{
							printf("%d\t",array[i][j][k]);
	}
	}
	}
}
