#include<stdio.h>
int fac(int n)
{
	if(n==1)
	return 1;
	else
	return n*fac(n-1);
}
void main()
{
	int n,r;
	printf("enter");
	scanf("%d",&n);
	r=fac(n);
	printf("%d",r);
}
