//swapping 2 no. using call by refrence
#include<stdio.h>

void main()
{
	int a,b;
	printf("ENTER 2 NO.S:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);	
}
	int swap(int *p, int *s)
	{
		int c=0;
		c=*p;
		*p=*s;
		*s=c;
		printf("swapped no.s= %d\t%d",*p,*s);
	}
