//amicable no.
#include<stdio.h>
void main()
{
	int a,b,s=0,t=0,c=0,z=0,i;
	printf("enter 2 no.s:");
	scanf("%d%d",&a,&b);
	t=a;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			s=s+i;
		}
	}
	c=b;
	for(i=1;i<b;i++)
	{
		if(b%i==0)
		{
			z=z+i;
		}
	}
	if(s==c && z==t)
	{
		printf("amicable no.");
	}
	else
	{
		printf("not amicable");
	}
}
