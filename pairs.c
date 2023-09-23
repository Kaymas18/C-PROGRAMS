#include<stdio.h>
int main()
{
	int n,k,a[100],i,j,l=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("Enter k:");
	scanf("%d",&k);
	printf("Enter array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((a[i]+a[j])/k==0)
			{
				l++;
			}
		}
	}
	printf("%d",l);
}
