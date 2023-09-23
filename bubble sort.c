#include<stdio.h>
int main()
{
	int A[50],n,j,i,t=0;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
			t=A[j];
			A[j]=A[j+1];
			A[j+1]=t;
		}
	}
	printf("the sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
