//print Fibonacci series 
#include<stdio.h>
main()
{
	int i,n,a=0,b=1,c=0;
	printf("Enter the value till which u want the fibonacci series to be printed:");
	scanf("%d",&n);
	printf("The fibonacci series is:");
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf(" %d ",a);
 		a=b;
 		b=c;
 	}
}
