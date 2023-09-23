#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int n=0,i,a=0,v=0,b=0;
	printf("ENter string:");
	scanf("%d",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='c' || s[i]=='k')
		{
			a=0;
			break;
		}
	}
	for(i=0;i<n;i++)
		{
			if(s[i]!='c' || s[i]!='k' && s[i]=='ff')
			{
			b=i;
			a++;
			s[b]='c';
			}
		}
	for(i=0;i<n;i++)
		{
			if(s[i]!='c' || s[i]!='k' && s[i]=='gg')
			{
			v=i;
			a++;
			s[v]='k';
			}
		}
	
	printf("%d",a);
}
