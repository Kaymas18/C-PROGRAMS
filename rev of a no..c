#include<stdio.h>
int main()
{
	int n,t=0,r=0;
	printf("Enter a no.:");
	scanf("%d",&n);
	while(n>0)
	{
		t=n%10;
		r=r*10+t;
		n=n/10;
	}
	printf("%d",r);
}
/*#include<stdio.h>
int main()
{
	int n,i,l=0,t,r,c=0,rev=0,a=0,u=0,y=0;
	scanf("%d",&t);
	while(t>0)
	{
		r=0;
		scanf("%d",&n);
		r=n;
		while(r>0)
		{
			l++;
			a=r%10;
			rev=rev*10+a;
			r=r/10;
		}
		r=n;
		u=l;
		while(u>=1)
		{
		    a=rev%10;
		    y=y*10+a;
		    if(y%u==0)
		    {
		        c++;
		    }
		    rev=rev/10;
		    u--;
		}
		if(c==l)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
		t--; 
	}
}*/
