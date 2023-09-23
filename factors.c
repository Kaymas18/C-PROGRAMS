//factors of a no.
#include<stdio.h>
void main()
{
	int a,i,c=0;
	printf("enter a no.:");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
		printf("%d ",i);
		c=c+i;
		}
	}
	printf("\n%d",c);
}
