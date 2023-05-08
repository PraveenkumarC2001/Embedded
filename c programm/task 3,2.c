#include<stdio.h>
void main()
{
	char employee_names[5][20];
	int employee_id[10];
	float salary[10];
	int a;
	for(a=0;a<5;a++)
	{
		printf("enter the employee name id and salary");
		scanf("%c %d %f",&employee_names,&employee_id,&salary);
	}
	for(a=0;a<5;a++)
	{
		printf("the employee name is %c emplyee id is %d and salary is %f",employee_names,employee_id,salary);
		
	}
}
