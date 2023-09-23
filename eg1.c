//Array of 5 students Q1
#include<stdio.h>
int main()
{
    int A[5],i;
    printf("Enter the data of the 5 students");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("The data of 5 students is:%d",A[i]);
    }
    return 0;
}
