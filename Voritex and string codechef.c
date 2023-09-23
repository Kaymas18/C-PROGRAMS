#include<stdio.h>
int main()
{
	int i,t,max=0,w,l,n;
	//printf("Enter t:");
	scanf("%d",&t);
	while(t>0)
	{
		//printf("Enter w and l:");
		scanf("%d %d",&w,&l);
		if(max<w-l)
		{
			max=w-l;
		}
		t--;
	}
	printf("%d",max);
}
