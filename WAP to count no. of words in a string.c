//WAP to count no. of words in a string
#include<stdio.h>
main()
{
	int i,l=0,c=0;
	char s[1000];
	printf("Enter a string:");
	gets(s);
	for(i=0;s[i]!=0;i++)
	{
		l++;
	}
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==' ')
		c++;
	}
	printf("The no. of words in the string=%d",l-c);
}
