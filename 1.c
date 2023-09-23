#include<stdio.h>
int power(int a, int b)
{
	if(b==0)
	{
		return 1;
	}
	else
	{
		return power(a,b);
		
	}
}
	void main()
	{
		int a,b,f=1,i;
		printf("enter");
		scanf("%d%d",&a,&b);
		for(i=1;i<=b;i++)
		{
			f=f*a;
		}
		printf("%d",f);
	}

