#include<stdio.h>
void main()
{
	int c,a=0,b=1,i,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",a);
		a=b;
		b=c;
	}
}
