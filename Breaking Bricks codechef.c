#include<stdio.h>
int main()
{
	int t,w,x,y,s,c=0,a=0,p=0;
	printf("Enter t:");
	scanf("%d",&t);
	while(t>0)
	{
		printf("\nEnter s and w,x,y:");
		scanf("%d%d%d%d",&s,&w,&x,&y);
		a=w+x+y;
		if(a>=s || a<s)
		{
			a=a-s;
			c++;
		}
		if(a<=0)
		{
			p++;
			break;
		}
		printf("%d",c+p);
		c=0;
		p=0;
		t--;
	}
}
