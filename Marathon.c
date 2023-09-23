#include<stdio.h>
int main()
{
	int t,a,b,c,d,D;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d%d%d%d%d",&D,&d,&a,&b,&c);
		if(d*D<10)
		{
			printf("\n0\n");
		}
		else if(d*D<21 && d*D>=10)
		{
			printf("\n%d\n",a);
		}
		else if(d*D<42 && d*D>=21)
		{
			printf("\n%d\n",b);
		}
		else
		{
			printf("\n%d\n",c);
		}
		d=0;
		D=0;
		a=0;
		b=0;
		c=0;
		t--;
	}
}
