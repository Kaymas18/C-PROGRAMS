//WAP to print any name and print first capital letter
#include<stdio.h>
#include<string.h>
main()
{
	int l=0,i;
	char s[1000],s1[1000];
	printf("Enter a string:");
	gets(s);
	strcpy(s1,s);
	for(i=0;s[i]!=' ';i++)
{
	{
			l++;
 	}
	for(i=0;l<=0;i++)
	{
		printf("%s",s[i]);
	}
	for(i=l;s1[i]!=' ';i++)
	{
		printf("%s",s1[i]);
	}	
}
strcat(s,s1);
puts(s);
return 0;
}
