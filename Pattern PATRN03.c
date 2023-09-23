#include<stdio.h>
int main()
{
	int t,n,i,k;
	scanf("%d",&t);
	for (i = 0; i < t; i++)
	{	
			int i, j, rows;
		   scanf("%d", &rows);
		   for (i = 1; i <= rows; ++i) 
		   {
		      for (j = 1; j <= i; ++j)
		      {
		         printf("%d", j);
		         if (j==i)
		                {
		                    break;
		                }
		         for (k = 0; k < j; k++)
		            {
		                
		                printf("*");
		            }   
		      }
		      printf("\n");
		   }
			printf("\n");
	}
    return 0;
}
