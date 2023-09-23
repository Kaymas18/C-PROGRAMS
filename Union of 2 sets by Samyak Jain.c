#include<stdio.h>
int main()
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
    printf("The union of the 2 sets is:\n");
    for(i=0;i<temp;i++)
    {
        printf("%d ",c[i]);
    }
}
