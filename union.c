#include<stdio.h>
int main()
{
    int i,j,k,n,m,o,l,a[50],b[50],c[100],tmp=0;
    printf("Enter the number of element in first and second set respectively :");
    scanf("%d%d",&n,&m);
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
    l=n;
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
           c[l]=b[i];
            l=l+1;
        }   

    }
    printf("The union of the 2 sets is:\n");
    for(i=0;i<l;i++)
    {
        printf("%d ",c[i]);
    }
}
