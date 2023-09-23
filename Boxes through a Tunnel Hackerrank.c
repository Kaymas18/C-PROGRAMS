#include<stdio.h>
int main()
{
	int t,a,b,c;
	scanf("%d",&t);
	while(t>0)
	{
		a=0;
		b=0;
		c=0;
		scanf("%d%d%d",&a,&b,&c);
		if(c>=41)
		{
			continue;
		}
		else
		{
			printf("%d",a*b*c);
		}
		t--;
	}
}


