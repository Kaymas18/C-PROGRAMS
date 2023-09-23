#include<stdio.h>
int main()
{
	int t,n,a[10],s=0,l=0,m=0,i;
	printf("ENter t:");
	scanf("%d",&t);
	while(t>0)
	{
		l=0;
		m=0;
		printf("\nEnter n:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		s=a[0];
		for(i=1;i<n;i++)
		{
			if(s-a[i]<=2)
			{
				l++;
				s=a[i];
			}
			else if(s-a[i]>2)
			{
				m++;
				s=a[i];
			}
		}
		printf("%d %d",l,m);
		t--;
	}
}
