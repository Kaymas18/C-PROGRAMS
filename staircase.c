#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Here's the stair case:\n");
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			
			for(k=0;k<n;)
			{
				printf(" ");
				printf("#");
				k++;
				printf("\n");
			}
			
		}
	}
}
