#include<stdio.h>
int main()
{
	int a[10000],n,i,X,Y,wo=0,lo=0,ti=0,wi=0,w,l,t;
	char ipl[100];
	printf("Enter the points remaining:");
	scanf("%d",&X);
	printf("Enter matches remaining:");
	scanf("%d",&Y);
	printf("Type 'w' for win\nType 'l' for lost\nType 't' for tie\n");
	for(i=1;i<=Y;i++)
	{
		printf("Enter the status of %d match:",i);
		scanf("%s",&ipl[i]);
		if(ipl[i]==w)
		{
			wo=wo+1;
		}
		else if(ipl[i]==l)
		{
			lo=lo+1;
		}
		else
		{
			ti=ti+1;
		}
	}
		wi=wo*2;
		printf("points scored=%d",wi);
		if(wi==X)
		{
			printf("\nRcb has qualified");
		}
		else
		{
			printf("\nrcb disqualified");
		}
}
