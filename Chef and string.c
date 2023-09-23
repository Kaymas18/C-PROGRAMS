#include <stdio.h>
#include<string.h>
int main()
{
	int p=0,t,i,m=0;
	char s[100001];
	scanf("%d",&t);
	while(t>0)
	{
		p=0;
		m=0;
		scanf("%s",s);
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='x')
			{
				p++;
			}
			else if(s[i]=='y')
			{
				m++;
			}
		}
		if(p>m)
		{
			printf("%d",m);
			printf("\n");
		}
		else if(p==m)
		{
			printf("%d",(p+m)/2);
			printf("\n");
		}
		else
		{
			printf("%d",p);
			printf("\n");
		}
	t--;
	}
}
