#include<stdio.h>
#include<math.h>
int main()
{
	int rem=0,rf=0,temp=0,a=0;
    float r=0.0,re=0.0,t,n,p,q;
    scanf("%f",&t);
    while(t>0)
    {
        scanf("%f",&n);
        scanf("%f %f",&p,&q);
        rem=p/q;
        r=p/q;
        re=r-rem;
     	rf=re*pow(10,n);
     	temp=rf;
        while(rf>0)
        {
            temp=rf%10;
            a=a+temp;
            rf=rf/10;
        }
        printf("%d\n",a);
        a=0;
        rf=0;
        temp=0;
        rem=0;
        re=0.0;
        r=0.0;
        t--;
    }
}
