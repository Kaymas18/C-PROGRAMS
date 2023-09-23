//WAP to remove extra spaces from a string
#include<stdio.h>
#include<string.h>
main()
{
	int l=0,i;
	char s[1000],s1[1000];
	printf("Enter a string:");
	gets(s);
	for(i=0;s[i]!='\0-';i++)
	{
		if(s[i]==' ')
			continue;	
		printf("%c",s[i]);
	}
}

