#include<stdio.h>
int main()
{
	int t,max=0,w,l,a[100],i,j=0,c=0;
	printf("Enter t:");
	scanf("%d",&t);
	while(t>0)
	{
		printf("Enter w and l:");
		scanf("%d %d",&w,&l);
		
		if(max<w-l)
		{
			max=w-l;
			c++;
		}
		else if(max<l-w)
		{
			max=l-w;
			j++;
		}
		t--;
	}
	if(c>j)
	{
		printf("1 %d",max);
	}
	else
	{
		printf("2 %d",max);
	}
}
