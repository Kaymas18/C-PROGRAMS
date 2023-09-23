//smallest digit of a no.
#include<stdio.h>

int main()
{
    int n,min=10,rem
	=0;
    printf("enter a no.:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(rem<min)
            min=rem;
        n=n/10;
    }
    printf("\nmin no. is %d",min);
    return 0;
}

