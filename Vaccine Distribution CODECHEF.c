#include<stdio.h>
int main()
{
	long long int t,n,d,i,c,p;
	int a[101];
	//printf("Enter T:");
	scanf("%lld",&t);
	while(t>0)
	{
		n=0;
		d=0;
		p=0;
		c=0;
	//	printf("Enter N and Days:");
		scanf("%lld%lld",&n,&d);
		//printf("Enter Patients:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(d==1)
		{
			printf("%lld\n",n*d);
		}
		else
		{
			for(i=0;i<n;i++)
			{
				if(a[i]<=9 && a[i]>=80)
				{
					c++;
				}
				else
				{
					p++;
				}
			}
			printf("%lld\n",c+p-d);
		}
		t--;
	}
}
