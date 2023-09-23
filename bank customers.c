//WAP to input details of two bank customers includes name,balance amount and account number .The program will add and display updated balance of both customers by adding 5% interest.
#include<stdio.h>
#include<conio.h>
struct bank
{
	char name [100];
	float amount;
	int num;
}b,b1;
main()
{
	int s,sum=0,amount=0,amount2=0,su=0,s1;
	printf("enter the details of the 1st bank customer\n");
	scanf("%s",b.name);
	scanf("%d",&b.num);
	scanf("%f",&b.amount);
	printf("enter the details of the 2nd bank customer\n");
	scanf("%s",b1.name);
	scanf("%d",&b1.num);
	scanf("%f",&b1.amount);
	b.amount=(0.05*b.amount)+b.amount;
	b1.amount=(0.05*b1.amount)+b1.amount;
	printf("the updated balance  of %s is %.2f",b.name,b.amount);
	printf("\nthe updated balance  of %s is %.2f",b1.name,b1.amount);
	
}
