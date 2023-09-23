//Armstrong number checking
#include<stdio.h>
#include<math.h>
main()
{
    int n,l=0,rem=0,temp=0,arm=0,i;
    printf("enter a no.=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        n=n/10;
        l++;
    }
n=temp;
    for(i=1;i<=n;i++)
    {
        rem=n%10;
         arm=arm+pow(rem,l);
          n=n/10;
    }
    printf("%d",arm);
    if(arm==temp)
    printf("\nArmstrong no.");
    else
        printf("\nNot Armstrong");
}

