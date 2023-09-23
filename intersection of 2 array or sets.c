#include <stdio.h> 
int main()
{
	int a[100],b[100],c[100],k=0,m,n,i,j;
	printf("Enter the sizes of arrays/sets:");
	scanf("%d%d",&n,&m);
	printf("Enter data of 1st array/set:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter data of 2nd array/set:");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				c[k++]=a[i];
				break;
			}
		}
	}
	printf("Intersection of the two arrays are :");
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
}
