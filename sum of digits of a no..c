#include<stdio.h>
int main()
{
    long int t,a,n,temp=0;
    scanf("%ld",&t);
    while(t>0)
    {
        scanf("%ld",&n);
        temp=n;
        while(n>0)
        {
            temp=n%10;
            a=a+temp;
            n=n/10;
        }
        printf("%ld\n",a);
        n=0;
        temp=0;
        a=0;
        t--;
    }
}
