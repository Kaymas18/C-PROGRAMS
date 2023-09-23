#include<stdio.h>
main()
{
	int c[100],a[50],b[50],k=0,t=0,j,i,n;
	printf("enter a value less than 50:");
	scanf("%d",&n);
	printf("enter elements of 1st array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("enter 2nd array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n-1;i++)
	{
	
	   	for(j=0;j<n-i-1;j++)
	    {
	    	if(a[j]>a[j+1])
	    	{
	    		t=a[j];
	    		a[j]=a[j+1];
	    		a[j+1]=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
	   	for(j=0;j<n-i-1;j++)
	    {
	    	if(b[j]>b[j+1])
	    	{
	    		t=b[j];
	    		b[j]=b[j+1];
	    		b[j+1]=t;
			}
		}
	}
	i=0;
	j=0;
	while (i!=n && j!=n)
	{
		if (a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
	    }
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	while(i!=n)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j!=n)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	for(i=0;i<2*n;i++)
	{
		printf("%d ",c[i]);
	}
}

