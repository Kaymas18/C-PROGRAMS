#include<stdio.h>
void main()
{
	int a[100],i,n;
	float p=0,ne=0,z=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
			p++;
		else if(a[i]<0)
			ne++;
		else
			z++;
	}
	printf("Positive terms=%.6f\n",p/n);
	printf("negative terms=%.6f\n",ne/n);
	printf("zero terms=%.6f",z/n);
}
