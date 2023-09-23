//sum of alternate digits of a no.
#include<stdio.h>
int main()
{
	int n,rem;
	printf("enter a no.:");
	scanf("%d",&n);
	int s1=0,s2=0,flag=1;;
	while(n!=0)
	{
		rem = n%10;
		if(flag>0)
		{
			s1+=rem;
			flag=flag*-1;
		} 
		else
		{
			s2+=rem;
			flag=flag*-1;
		}
		n=n/10;
	}
	printf("\nsum of even places digits=%d",s1);
	printf("\nsum of odd places digits=%d",s2);
	return 0;
}
