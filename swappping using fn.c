//swappping using fn
#include<stdio.h>
void main()
{
	int x,y;
	printf("enter 2 no.s:");
	scanf("%d%d",&x,&y);
	swap(x,y);
}
void swap(int a, int b)
{
	int t=0;
	t=a;
	a=b;
	b=t;
	printf("%d %d",a,b);
}

