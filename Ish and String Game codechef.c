#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l=0,k=0,j;
	char a[30],b[30];
	printf("Enter t:");
	scanf("%d",&t);
	while(t>0)
	{
		printf("Enter strings:");
		scanf("%s %s",a,b);
		while(a!='\0' && b!='\0')
		{
			printf("%d",strcmp(a,b));
		}
		t--;
	}
	
}
