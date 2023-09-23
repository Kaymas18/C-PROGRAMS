//sort a string
#include<stdio.h>
#include<string.h>
main()
{
	int i,l,j;
	char s[1000],t;
	printf("Enter the string:");
	gets(s);
	l=strlen(s);
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<i-l-1;j++)
		t=s[j];
		s[j]=s[j+1];
		s[j+1]=t;
	}
	for(i=0;i<l;i++)
	{
		puts(s);
	}
	
}
