//all 4 digits armstrong no.
#include<stdio.h>
#include<math.h>
void main()
{
int i,j,arm=0,a,t=0;
for(i=1000;i<=9999;i++)
{	t=i;
		for(j=1;j<=4;)
		{
			a=i%10;
			arm=arm+pow(a,4);
			i=i/10;
			j++;
		}
		i=t;
	if(i==arm)
	{
	printf("%d",i);
	}
	else
	{
	i++;
	}
}
}
