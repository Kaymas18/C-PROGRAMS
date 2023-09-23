//student with max marks
#include<stdio.h>
#include<conio.h>
struct stud
{
float marks;
char name[50];
}s[100];

main()
{
	int n,max=-1,k,i;
	printf("enter no.of students\n");
	scanf("%d",&n);
	printf("\nenter the details of those %d students\n",n);
	for (i=0;i<n;i++)
	{
		scanf("%s\n%f",s[i].name,&s[i].marks);
	}
	for (i=0;i<n;i++)
	{
		if(max<s[i].marks)
		{
		max=s[i].marks;
		k=i;
		}
	}
	printf("the student with max marks is:%s",s[k].name);
}

