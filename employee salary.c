//WAP to input employee record including employee number,employee name and salary. Display record and calculate gross-salary and net-salary if salary is less than 15000 then house rent allowance is 30% and dearness allowance is 35% and if salary is greater than or equal 15000 then dearness allowance is 25% and house rent allowance is 30%.
#include<stdio.h>
struct employee
{
	int num;
	char name[100];
	float sal;
}e[100000];
main()
 {
	int n,ns,i;
	printf("Enter the no. of employees:\n");
	scanf("%d",&n);
	printf("Enter the details of those %d emloyees",n);
	for(i=0;i<n;i++)
	{
		printf("\nName:");
		scanf("%s",e[i].name);
		printf("\nID Number:");
		scanf("%d",&e[i].num);
		printf("\nEnter salary:");
		scanf("%f",&e[i].sal);
	}
	for(i=0;i<n;i++)
	{
		if(e[i].sal<=15000)
		{
			e[i].sal=e[i].sal+(e[i].sal*0.3)+(e[i].sal*0.35);
			printf("\nThe salary of %s with ID no. %d is %f",e[i].name,e[i].num,e[i].sal);
		}
		else
		{
				e[i].sal=e[i].sal+(e[i].sal*0.3)+(e[i].sal*0.25);
				printf("\nThe salary of %s with ID no. %d is %f",e[i].name,e[i].num,e[i].sal);
		}
	}
}

