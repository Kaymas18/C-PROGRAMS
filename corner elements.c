#include<stdio.h>
main()
{
	int a[100][100],i,j,m,n,flag=0;
	printf("Enter rows and columns of matrix:");
	scanf("%d%d",&m,&n);
	if (m!=n && m<3 && n<3 && m%2==0 && n%2==0)
	{
		printf("no middle elements");
	}
	else
	{
	printf("Enter elements of matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the middle elements is:");
	for(i=0;i<m;i++)
	{
		if(i==(m-1)/2)
		{
			for(j=0;j<n;j++)
			if(j==(n-1)/2)
			printf("%d",a[i][j]);
		}
	}
	}	
/*	printf("The corner elements are:");
		for(i=0;i<m;i++)
	{
			if(i==0 || i==m-1)
		{
			for(j=0;j<n;j++)
			if(j==0 || j==n-1)
			{
				printf("%d\n",a[i][j]);
			}
		}
	}*/
	
	
}
