#include<stdio.h>
main()
{
	struct emp
	{
		char name[1000];
		int age; 
	}e;
	printf("enter info :\n");
	scanf("%d",&e.age);
	printf("%d",e.age);
}
