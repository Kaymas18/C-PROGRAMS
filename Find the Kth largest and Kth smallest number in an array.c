//Find	the	Kth	largest	and	Kth	smallest number in an array.
#include<stdio.h>
int main()
{
    int a[100],p,i,j,n,k,m=0,o=0,t=1;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter array of size n:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter k:");
    scanf("%d",&k);
    i=0;
    while(i<n)
    {
    	if(k==i-1)
    	{
    		printf("%d smallest is:%d\n",k,a[k-1]);
		}
		if(k==n-i)
		{
		    printf("%d largest is:%d\n",k,a[n-i]);	
		}
		i++;
	}
   /*if(k==1)
    {
    	printf("%dst smallest is:\n",k,a[0]);
    	printf("%dst largest is:\n",k,a[n-1]);

	}
	else 
	{
		printf("%dst smallest is:\n",k,a[k-1]);
    	printf("%dst largest is:\n",k,a[n-k]);
	}*/
}	
