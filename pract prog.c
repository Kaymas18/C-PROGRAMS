//prime no from 2 to 400
#include<stdio.h>
main()
{
	int i,c,j;
	for(i=2;i<400;i++)
	{c=0;
		for(j=2;j<=i;j++)
		{
		if(i%j==0 && i%1==0)
		c++;
		}
	if(c==2)
	printf("%d\t",i);
}
}
