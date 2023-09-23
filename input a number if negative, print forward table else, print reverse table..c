//input a number if negative, print forward table else, print reverse table.
#include<stdio.h>
main()
{
	int n,v=0,i,temp=0;
	printf("Enter the no. of which you want the table:");
	 scanf("%d",&n);
	 printf("The table is :\n");
	 v=n;
	 if(v>0)
	 {
	 for(i=1;i<=10;i++)
	 	{
		 printf("%d*%d=%d\n",n,i,n*i);
		}
	}
	else
	{
		for(i=10;i>=1;)
			{
			printf("%d*%d=%d\n",-1*n,i,-1*n*i);
			i--;
			}
	}
			
		}

