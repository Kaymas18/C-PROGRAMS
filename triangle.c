#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,a[100][100],t=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter array:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>a[i+1][j+1])
			{
				t=a[i][0];
				a[i][0]=a[i+1][0];
				a[i+1][0]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
}
