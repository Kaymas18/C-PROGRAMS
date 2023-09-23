#include<stdio.h>
int main()
{
	int i,j,k,l,u[15],a[15],b[15],n,m,w=1;
	printf("Enter the no. of elements in universal set:");
	scanf("%d",&n);
	printf("Enter the %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&u[i]);
	}
	printf("Enter the no. of elements in set A:");
	scanf("%d",&m);
	printf("Enter the %d elements:",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Complement of A is:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[j]==u[i])
			{
				w=0;
				break;
			}
			else
			{
				w=1;
				printf("%d",u[i]);
			}
		/*if(w==1)
		{
			printf("%d",u[i]);
		}*/
		}
	}
}
