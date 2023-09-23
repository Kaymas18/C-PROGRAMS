#include<stdio.h>
int main()
{
	int t,x,a,b;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d %d %d",&x,&a,&b);
		printf("%d\n",(a+(100-x)*b)*10);
		x=0;
		a=0;
		b=0;
		t--;
	}
}
