//swapping 2 no. using call by value
#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter 2 no.s:");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
int swap(int x, int y)
	{
		int c=0;
		c=x;
		x=y;
		y=c;
		printf("swapped no.s are: %d\t%d",x,y);
	}
