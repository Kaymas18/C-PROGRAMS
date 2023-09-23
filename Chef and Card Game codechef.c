#include<stdio.h>
int main()
{
    long int t,n,a[100],b[100],c=0,q=0,i,s=0,z=0,temp=0,e=0,tem=0,d=0;
    scanf("%ld",&t);
    while(t>0)
    {
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld %ld",&a[i],&b[i]);
        }
            for(i=0;i<n;i++)
            {
                if(a[i]>b[i] && a[i]<=9 && b[i]<=9)
                {
                    c++;
                }
                else if(a[i]<b[i] && a[i]<=9 && b[i]<=9)
                {
                    q++;
                }
                else if(a[i]>=10)
                {
                    while(a[i]>0)
                    {
                        tem=a[i]%10;
                        d=d+tem;
                        a[i]=a[i]/10;
                    }
                    if(d>b[i])
                    {
                        s++;
                    }
                }
                else if(b[i]>=10)
                {
                     while(b[i]>0)
                    {
                        temp=b[i]%10;
                        e=e+temp;
                        b[i]=b[i]/10;
                    }
                    if(e>a[i])
                    {
                        z++;
                    }
                }
            }
            if(c+s>z+q)
            {
                printf("0 %ld\n",s);
            }
            else if(c+s<z+q)
            {
                printf("1 %ld\n",z);
            }
            else
            {
                printf("2 %ld\n",c+s);
            }
            c=0;
            s=0;
            z=0;
            q=0;
            tem=0;
            temp=0;
            e=0;
            d=0;
            t--;
    }
}
