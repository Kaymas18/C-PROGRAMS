#include<stdio.h>
int main()
{
    int a[100][100],c=0,n,i,j,d=0,s=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array:\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
            scanf("%d",&a[i][j]);
        }
	}
        for(i=0;i<n;i++)
    	{
    		for(j=0;j<n;j++)
    		{
    			if (i==j)
    			{ 
					printf(" %d \n",c);
    				c=c+a[i][j];
    			}
			}
		}
		 for(i=0;i<n;)
    	{
    		for(j=n-1;j>=0;j--)
    		{
    			if ((i+j)/2==1)
    			{
    				printf(" %d \n",d);
    				d=d+a[i][j];
    				i++;
    			}
			}
		}
		printf("\nc=%d",c);
		printf("\nd=%d",d);
		s=c-d;
		if(s<0)
		{
			s=s*(-1);
			printf("\n%d",s);
		}
		else
		{
			printf("\n%d",s);
		}
}
