#include<stdio.h>
void main()
{
	int i,k,j;
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
			printf(" ");
		for(k=0;k<=i;k++)
		{
			printf("A");
		}
	printf("\n");
	}
	
}
