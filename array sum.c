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
                    d=d+a[i][j];
                }
                i++;
            }
        }
        s=c-d;
        if(s<0)
        {
            s=s*(-1);
            printf("%d",s);
        }
        else
        {
            printf("%d",s);
        }
}
