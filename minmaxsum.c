#include<stdio.h>
int main() 
{
	int a[10],max=0,min=0,mins=0,maxs=0,i,n,s=0;
/*	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array:");*/
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
		{
			if(max<a[i])
			{
				max=a[i];
			}
			if(min>a[i])
			{
				min=a[i];
			}
		}
	mins=s-max;
	maxs=s-min;
	printf("%d %d",mins,maxs);
}


