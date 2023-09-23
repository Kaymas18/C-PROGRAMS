//series sum
#include<stdio.h>

void main()
{
	int n,i,s=0,r=0;
	printf("enter value of n:");
	scanf("%d",&n);
	r=fact(i);
	printf("%d\n",r);
	for(i=1;i<=n;i=i+2)
	{
		s=s+(1/r);
	}
	printf("sum=%d",s);
}

int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
