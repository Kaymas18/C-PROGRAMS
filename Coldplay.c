#include<stdio.h>
int main()
{
	int t,s,m;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d %d",&m,&s);
		printf("%d\n",m/s);
		m=0;
		s=0;
		t--;
	}
}
