#include<stdio.h>
void main()
{
	int i,k,n,a[100],t,max=0,l=0,w,q;
	printf("Enter t:");
	scanf("%d",&t);
	while(t>0)
	{
		l=0;
		w=0;
		q=0;
		printf("\nEnter n and k:");
		scanf("%d %d",&n,&k);
		printf("Enter array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		max=a[0];
		if(max>=k)
		{
			for(i=1;i<n;i++)
			{
				max=(max-k)+a[i];
				l++;
			}	
		}
		else if(max>=k)
		{
			for(i=2;i<=n;i++)
			{
				max=(max-k)+a[i];	
				w++;
			}	
		}
		else if(max<k)
		{
			q++;
		}
		t--;
		if(l==n)
		{
			printf("YES");
		}
		else if(q==1)
		{
			printf("\nNO %d",q);
		}
		else
		{
			printf("\nNO %d",w);
		}
		t--;
	}
}
