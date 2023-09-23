#include<stdio.h>
int main()
{
	int a[100],s=0,i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("sum=%d",s);
}
