#include<stdio.h>
int main()
{
	int n,a,l=0,i;
	//printf("enter n:");
	scanf("%d",&n);
	//printf("enter a:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	    l=n;
		if(n%10==0)
		{
		    n=n/10;
		}
		else
		{
			n=n-1;
		}
	}
	printf("%d",n);
}
