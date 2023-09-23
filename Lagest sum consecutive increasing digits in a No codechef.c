#include<stdio.h>
int main()
{
	int n=0,i=0,r=0,a=0,s=0,m=0;
	printf("Enter no:");
	scanf("%d",&n);
	r=n;
	while(r>0)
	{
		a=r%10;
		i=r/10;
		m=i%10;
		if(m<a)
		{
			s=s+a+m;
			printf("%d\t",s);
		}
		r=r/10;
	}

}
