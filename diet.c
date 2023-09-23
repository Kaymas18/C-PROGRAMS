#include<stdio.h>
void main()
{
	int i,k,n,a[100],t,max=0,c,l=0,p=0;
	printf("Enter t:");
	scanf("%d",&t);
	while(t>0)
	{
		/*p=0;
		l=0;*/
		printf("\nEnter n and k:");
		scanf("%d%d",&n,&k);
		printf("\nEnter array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		max=a[0];
		if(max<k)
		{
			p=1;
		}
		else
		{
			for(i=1;i<n;i++)
			{
				max=(max-k)+a[i];
				l++;
			}
		}
		if(l==n)
		{
			printf("Yes");
		}
		else if(l<n)
		{
			printf("No %d",l);
		}
		else
		{
			printf("No %d",p);
		}
		t--;
	}
}
