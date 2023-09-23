//series sum
#include<stdio.h>

void main()
{
	int n,i,s=1;
	printf("enter value of n:");
	scanf("%d",&n);
	fact(n);
	for(i=1;i<=n;i=i+2)
	{
		s=s+(1/fact(n));
	}
	printf("%d",fact(n));
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
