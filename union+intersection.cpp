#include<stdio.h>
void unio();
void intersect();
int main()
{
int a[10],b[10],c[10],d[10],i,j,k=0,n,m,flag=0;
 printf("Enter the size of array A:");
 scanf("%d",&n);
 printf("Enter the element of First array A:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the size of array B:");
 scanf("%d",&m);
 printf("Enter the elements of array B:");
 for(j=0;j<m;j++)
 {
 scanf("%d",&b[j]);
 }
 for(i=0;i<n;i++)
 {
 	printf("%d",unio()-intersect());
 }
}
void unio()
{
    int i,j,k,n,m,a[50],temp=0,b[50],c[100];
    printf("Enter the number of element in first set:");
    scanf("%d",&n);
    printf("Enter the number of element in second set:");
	scanf("%d",&m);
    printf("Enter the element of first set :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element of second set :");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    temp=n;
    for(i=0;i<m;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                k=1;
                break;
            }
        }
        if(k==0) 
        {
           c[temp]=b[i];
            temp=temp+1;
        }   
    }
}
void intersect()
{
	int a[100],b[100],d[100],k=0,m,n,i,j;
	printf("Enter the sizes of arrays/sets:");
	scanf("%d%d",&n,&m);
	printf("Enter data of 1st array/set:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter data of 2nd array/set:");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				d[k++]=a[i];
				break;
			}
		}
	}
}
