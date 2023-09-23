/*#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i=0,l=0;
	printf("Enter string:");
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]==1)
		i++;
	}
	printf("%d",i);
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char c,s[100],sen[100],ch;
    int i=0;
    ch=getchar();
		
		while(ch != '/0')
		{
			sen[i] = ch;// Store the read character in str
				i++;
			ch = getchar();// Get another character
		}
    scanf("%c",&c);
    printf("%c\n",c);
    scanf("%s",&s);
    printf("%s\n",s);
    puts(sen);
}

