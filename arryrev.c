#include<stdio.h>
int main()
{
	int a[1001],i,n,j;
	//printf("Enter n:");
	scanf("%d",&n);
	//printf("Enter array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
//	printf("reverse:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
