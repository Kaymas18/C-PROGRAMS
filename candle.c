#include<stdio.h>
int main() 
{
	int a[100],max=0,i,n,s=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
		{
			if(max<a[i])
			{
				max=a[i];
			}
		}
		for(i=0;i<n;i++)
		{
			if(max==a[i])
			{
				s++;
			}
		}
	printf("%d",s);
}

