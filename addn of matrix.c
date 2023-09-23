//addition of 2 matrix
#include<stdio.h>
int main()
{
	 int i,a[10][10],b[10][10],c[10][10],j,n;
	printf("Enter size of matrix:");
	scanf("%d",&n);
	printf("Enter elements of 1st matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of 2nd matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Addition of matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
}
}
