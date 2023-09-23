//power of a no.
#include<stdio.h>
void main()
{
	int a,b,s=1;
	printf("enter base and power");
	scanf("%d%d",&a,&b);
	while(b>0)
	{
		s=s*a;
		b=b-1;
	}
	printf("%d",s);
}
