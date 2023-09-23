#include<stdio.h>
void main()
{
int i,j,k,p,n,m,a[100],b[100], c[200],d=0;
printf("Enter the size of set 1:");
scanf("%d",&n);
printf("Enter the elements of set 1:");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("Enter the size of set 2:");
scanf("%d",&m);

printf("Enter the elements of set 2:");
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
if(c==0)
	{
		printf("Both the sets are equal");
	}
for(k=0;k<p;k++)
	{
	printf("Difference=%d ",c[k]); 
	}
} 
