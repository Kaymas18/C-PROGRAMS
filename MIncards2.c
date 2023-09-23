#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,l=0,a;
	char s[100];
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	//a=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='R' && s[i+1]=='R' || s[i]=='G' && s[i+1]=='G' || s[i]=='B' && s[i+1]=='B')
		{
			l++;
		}
	}
	printf("%d",l);
}
