#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter n:");
	scanf("%d",&n);
	while(n>0)
	{
	s=s+(n%10);
	n=n/10;
	}
	printf("%d",s);
}
