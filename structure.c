//structure
#include<stdio.h>
struct students
{
	float marks;
	char name[20];
	int roll;
}
main()
{
	struct students s;
	printf("enter name:");
	scanf("%s",s.name);
	printf("enter roll no:");
	scanf("%d",&s.roll);
	printf("enter marks:");
	scanf("%f",&s.marks);
	
	printf("\nname is %s",s.name);
	printf("\nroll no.is %d",s.roll);
	printf("\nmarks are %f",s.marks);
		}
