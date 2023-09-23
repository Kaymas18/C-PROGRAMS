#include<stdio.h>
int main()
{
	int n,a[100],s,c=0,k=0,i,t=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	s=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]!=s)
		{
			s=a[i+1];
		}
		else
		{
			c++;
			if(c==2)
			{
				break;
			}
		}
		k=k+c;
	s=a[i];
	}
	printf("%d",k);
}
