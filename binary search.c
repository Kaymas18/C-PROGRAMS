//binary search
#include<stdio.h>
void main()
{
	int a[10],i,c=0,n,f,l,m;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the no. to be found:");
	scanf("%d",&c);
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<=l)
	{
		if(c==a[m])
		{
			printf("no. found");
		}
		else if(c<a[m])
		{
			l=m-1;
		}
		else if(c>a[m])
		{
			f=m+1;
		}
		else
		{
			printf("not");
		}
	}
}
