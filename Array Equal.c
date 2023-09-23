#include<stdio.h>
int main()
{
    int n=4,a[10]={2,4,4,5},i,t=1,c=0;
    while(t>0)
    {
        for(i=0;i<n;i++)
        {
                if(a[i]==a[i+1] || a[i]==a[i-1])
                {
                    c=c+1;
                }
                else if(a[i]<a[i+1])
                {
                    a[i]=a[i]+2;
                }
                else 
                {
                    a[i]=a[i]-1;
                }
        }
        if(c<n)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        /*i=0;
        c=0;
        n=0;*/
        t--;
    }
}
