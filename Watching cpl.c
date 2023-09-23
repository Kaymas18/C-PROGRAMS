#include<stdio.h>
int main()
{
    int a[100002],n,t,k,i,j,tmp,c=0,s=0,co=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
      {
        for(j=i+1; j<n; j++)
        {
            if(a[j] <a[i])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
      }
    for(i=n-1;i>=0;i--)
    {
      co=co+1;
        s=s+a[i];
        if(a[i]>=k || s>=k)
        {
            s=0;
            c=c+1;
            if(c==2)
            {
              break;
            }
        }
    }
    printf("%d\n",co);
    c=0;
    i=0;
    n=0;
    s=0;
    k=0;
    j=0;
    co=0;
    tmp=0;
    t--;
    }
}
