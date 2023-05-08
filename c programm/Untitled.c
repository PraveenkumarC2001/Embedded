#include<stdio.h>
#include<string.h>

struct stud
{
	int id;
	char name[50];
};
int main()
{
	struct stud s1,s2;
	s1.id=2001;
	s2.id=2002;
	strcpy(s1.name,"praveen");
	strcpy(s2.name,"kumar");
	printf("\nstudent 1 id %d",s1.id);
	printf("\nstudent 2 name %s",s1.name);
	printf("\nstudent 2 id %d",s2.id);
	printf("\nstudent 2 name %s",s2.name);
}
