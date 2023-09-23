//max element of 2d array
#include<stdio.h>
main()
{
	int a[50][50],i,j,k=0,t=0,n,m,max=0,ma=0,f,g;
	printf("Enter size of matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter the matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	max=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
			
		}
	}
//	printf("max element is %d",a[k][t]);
	ma=-3478;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(ma<a[i][j] && a[i][j]<max)
			{
				ma=a[i][j];
			}
			
		}
	}
		
	printf("2nd max is %d",ma);
}
