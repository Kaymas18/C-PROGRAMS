#include<stdio.h>
void main()
{
	int a[10],i,j,c=0,*p,n,k=0;
	p=&a[0];
	printf("Enter elements of the array:");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Enter element to be found:");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		if(j==*(p+i))
		{
			c++;
			k=i;
		}
	}
	if(c>0)
	{
		printf("element found %d times",c);
	}
	else
	{
		printf("element not found");
	}
}
