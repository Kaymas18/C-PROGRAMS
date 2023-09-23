/*Check	whether	n	is	present	in	an	array	of	size	m	or	not.	*/
#include<stdio.h>
int main()
{
	int n,a[100],i,m,c=0;
	printf("Enter m:");
	scanf("%d",&m);
	printf("Enter array of size %d:",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		if(n==a[i])
		{
			c++;
		}
	}
	if(c==1)
	{
		printf("%d is found",n);
	}
	else
	{
		printf("Not found");
	}
}
