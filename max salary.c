//WAP to input details of 5 employees of a company including id,name,age and salary .Find out maximum salary of a employee.
#include<stdio.h>
struct emp
{
	int age,id;
	char name[1000];
	float sal;
}e[2];
main()
{
	int i,max=-1,k;
	for(i=0;i<2;i++)
	{
		printf("\nEnter name of the employee:");
		scanf("%s",e[i].name);
		printf("\nEnter the ID of %s:",e[i].name);
		scanf("%d",&e[i].id);
		printf("\nEnter the age of %s:",e[i].name);
		scanf("%d",&e[i].age);
		printf("\nEnter the salary of %s:",e[i].name);
		scanf("%f",&e[i].sal);
	}
	for(i=0;i<2;i++)
	{
		if(max<e[i].sal);
		{
			max=e[i].sal;
			k=i;
		}
	}
	printf("\nThe employee with max salary is %s with id %d",e[k].name,e[k].id);
	
}
