#include<stdio.h>
int main()
{
	int t,js=0,ts,i=0,j=0,c;
	printf("Enter t:");
	scanf("%d",&t);
	while(t>0)
	{
		printf("Enter ts:");
		scanf("%d",&ts);
		if(t<=100 && ts<=100)
		{
			if(ts%2==0)
			{
			printf("%d\n",ts/2);
			}
			else
			{
			printf("%d\n",(ts-1)/2);
			}
		}
		t--;
	}
}

