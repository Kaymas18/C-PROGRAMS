//WAP to input details of 5 students having roll number,name and marks.Display details of all of the students and search record for a particular student.
#include<stdio.h>
struct stud
{
	int roll;
	float marks;
	char name[5000];
}a[2],b;
main()
{
	int i,ch[1];
	for(i=0;i<2;i++)
	{
	 
	printf("\nEnter name of student:");
	scanf("%s",a[i].name);
	printf("\nEnter the roll no. of %s:",a[i].name);
	scanf("%d",&a[i].roll);
	printf("\nEnter the marks of %s:",a[i].name);
	scanf("%c",&ch[i]);
	scanf("%f",&a[i].marks);
	}
	printf("\nEnter name of student for the record to be searched:");
	scanf("%s",b.name);
	printf("\nor\nEnter the roll no. of student to be searched:");
	scanf("%d",b.roll);
	
	for(i=0;i<2;i++)
	{
		if(a[i].name==b.name)
		{
			printf("\nRoll no. is %d",a[i].roll);
			printf("\nMarks are %f",a[i].marks);
		}
		else if(b.roll==a[i].roll)
		{
			printf("\nName is %s",a[i].name);
			printf("\nMarks are %f",a[i].marks);
		}
		else
		{
			printf("Sorry");
		}
	}
	
}
