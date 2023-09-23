/*Create	an	Array	of	size	10	of	integers.	Take	input	from	the	user	for	these	
10	elements	and	print	the	entire	array	after	that.*/
#include<stdio.h>
void main()
{
	int a[11],n,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
