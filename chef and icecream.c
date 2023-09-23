#include<stdio.h>
int main()
{
	int a[1000],n,t,i,s=0;
	printf("enter t:");
	scanf("%d",&t);
	while(t>0)
	{
		printf("\nEnter n:");
		scanf("%d",&n);
		printf("Enter array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		s=a[0];
		for(i=1;i<n;i++)
		{
			if(s<a[i]&&(a[i]-s==s))
			{
				printf("\nYES");
			}
			else
			{
				printf("\nNO");
			}
		}
		t--;
	}
}
