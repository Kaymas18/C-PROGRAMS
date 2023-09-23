#include<stdio.h>
int num(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	return n+num(n-1);
}
void main()
	{
		int n;
		printf("enter");
		scanf("%d",&n);
		printf("%d",num(n));
	}
