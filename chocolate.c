#include<stdio.h>
int main()
{
	int m,d,n,i,s[5],l=0,sum=0,j;

	/*if((d>=1 && d<=31)&&(m>=1 && m<=12))
	{
		printf("Enter valid month and day");
	}*/
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}	
	
	printf("Enter the birth day:");
	scanf("%d",&d);
	printf("Enter the birth month:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		sum=sum+s[i];
		if(d==s[i])
		{
			l++;
			j=i;
			s[i]=s[j];
			i++;
		}
	}
	printf("%d",l);
	
}
