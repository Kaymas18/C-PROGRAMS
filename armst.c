#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n,arm=0,r=0,t=0;
	for(i=1000;i<=9999;i++)
	{t=i;
		for(j=1;j<=4;j++)
		{
			r=i%10;
			arm=arm+pow(r,4);
			i=i/10;
		}
		if(t==arm)
		{
			printf("%d",t);
		}
		else
		{
			i++;
		}
	}
}
