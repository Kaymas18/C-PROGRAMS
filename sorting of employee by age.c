//WAP to accept employee no,age and salary of five workers and sort their names according to their age.
#include<stdio.h>
struct emp
{
	int age;
	char name[5000];
}s[3];
main()
{
int i,j,t=0;
for(i=0;i<3;i++)
		{
			printf("\nEnter the name of employee %d:",i);
			scanf("%s",&s[i].name);
			printf("\nEnter the age of %s:",s[i].name);
			scanf("%d",&s[i].age);
		}	
printf("\nThe list of youngest to oldest person is:\n");
for(i=0;i<2;i++)
{		
	for(j=0;j<2-i;j++)
	{
	t=s[j].age;
	s[j].age=s[j+1].age;
	s[j+1].age=t;
	}	
}
	for(i=0;i<3;i++)
		{
		printf("%d\n",s[i].age);	
		}
}
