#include<stdio.h>
int main()
{
	long long int a[1000000000];
	int n,m,i;
	printf("Enter n:")
	scanf("%d",&n);
	printf("Enter m:");
	scanf("%d",&m);
	if(m<n)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	}
}
