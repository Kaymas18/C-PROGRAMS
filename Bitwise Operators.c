//Bitwise Operators
#include<stdio.h>
int main()
{
	int i,n,k,j,a[100],b[100],c[100],max=-1;
	scanf("%d %d",&n,&k);
	for(i=1;i<n;i++)
	{
		j=0;
		j=i+1;
		while(j<=n)
		{
			a[j]=i&j;
			b[j]=i|j;
			c[j]=i^j;
			j++;
		}
	}
	for(j=0;j<n;j++)
	{
		if(max>a[j])
		{
			max=a[j];
		}
	}
	printf("%d\n",max);
	max=-1;
	for(j=0;j<n;j++)
	{
		if(max>b[j])
		{
			max=b[j];
		}
	}
	printf("%d\n",max);
	max=-1;
	for(j=0;j<n;j++)
	{
		if(max>c[j])
		{
			max=c[j];
		}
	}
	printf("%d\n",max);
}
