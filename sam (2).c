#include<stdio.h>
int main()
{
    int a[100][100],c=0,i,j,d=0,s=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                if (i==j)
                {
                	printf(" %d \n",c);
                    c=c+a[i][j];
                }
            }
        }
         for(i=0;i<=2;)
        {
            for(j=2;j>=0;j--)
            {
                if ((i+j)/2==1)
                {
                	printf(" %d \n",d);
                    d=d+a[i][j];
                    i++;
                }
            }
        }
        printf("\nc=%d",c);
		printf("\nd=%d",d);
        s=c-d;
        if(s<0)
        {
            s=s*(-1);
            printf("\n%d",s);
        }
        else
        {
            printf("\n%d",s);
        }
}


