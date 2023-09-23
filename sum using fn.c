//sum using fn
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter 2 no.s:");
	scanf("%d%d",&x,&y);
	sum(x,y);
}
void sum(int a, int b)
{
	printf("sum=%d",a+b);
}
