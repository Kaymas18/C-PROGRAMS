//prime no b/w 2 and 400
#include<stdio.h>
void main()
{
	int i,c=0,j,s=0;
	for(i=1;i<=1000;i++)
	{ c=0;
	for(j=1;j<=i;j++)
	{c=0;
		if(i%j==0)
		{
		c++;
		//s=s+i;
		}
	}
	
/*	if(c==50)
		{
			printf("%d\n",i);
		}
 	}*/	
 	//printf("sum=%d",s);
}
	printf("%d",c);
}

