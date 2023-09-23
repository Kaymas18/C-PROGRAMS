#include <stdio.h>
int main()
{
    int t,i,n,a[100001],c=0,b=0,temp=0,j;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        if(b==n)
        {
        	for(i=n-2;i>=0;i--)
			{
				for(j=0;j<=i;j++)
					{
						if(a[j]>a[j+1])
							{
								temp=a[j];
								a[j]=a[j+1];
								a[j+1]=temp;
							}
					}
			}
		}
		
		for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        c=0;
        b=0;
        t--;
    }
}


