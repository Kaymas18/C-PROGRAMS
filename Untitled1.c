#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,n;
    char b[10],a[10];
    char  *c;
    scanf("%d",&t);
    while(t>0)
    {
        gets(a);
        gets(b);
        *c=strtok(a," ");
        while(c!=NULL)
        {
            printf("%s\n",c);
            *c=strtok(NULL," ");
        }
        t--;
    }
}

