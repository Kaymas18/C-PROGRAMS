//Q32
#include<stdio.h>
main()
{
	int a[20],n,i,s,c=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{ 
	scanf("%d",&a[i]);
	}
	s=a[0];
	for(i=1;i<n;i++)
	{
		if(s==a[i])
		{
			c++;
		}
		if(c>1)
		{
			printf("%d",a[i]);
		}
		else
		{
			s=a[i];
		}
	}
	
	
}
