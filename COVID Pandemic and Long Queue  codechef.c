#include<stdio.h>
int main()
{
	int t,a[100],n,s,i;
	printf("Enter t:");
	scanf("%d",&t);
	while(t>0)
	{
		printf("\nEnter n:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		s=a[0];
		for(i=1;i<n;i++)
		{
			if(s!=1)
			{
				s=s+a[i];
				i++;
			}
		}
		if(s==6)
		{
			printf("YEs");
		}
		else
		{
			printf("No");
		}
		t--;
	}
}

