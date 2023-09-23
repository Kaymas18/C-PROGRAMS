#include<stdio.h>
void main()
{
int i,j,k,p,n,m,a[50],b[50], c[100],d=0;
printf("Enter the size of universal set:");
scanf("%d",&n);
printf("Enter the elements of universal set:");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("Enter the size of set A:");
scanf("%d",&m);
printf("Enter the elements of set A:");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
k=0;
for(i=0;i<n;i++)
{
	d=1;
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
			d=0;
			break;
			}
		}
		if(d==1)
		{
		c[k]=a[i];
		k++;
		}
}
p=k;
if(d==0)
	{
		printf("Both the sets are equal");
	}
	printf("Complement of set A is:");
for(k=0;k<p;k++)
	{
		printf("%d ",c[k]);
	}
}

