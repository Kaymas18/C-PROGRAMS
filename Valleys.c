#include <stdio.h> 
#include<string.h>
int main() 
{ 
	int l=0,k=0,i;
   char str[100000]; 
   gets(str);
   for(i=0;str[i]=='D'&&str[i]!='\0';i++)
   {
   	if(str[i]==str[i+1])
   	{
   		l++;
	}
	else
	{
		k++;
	}
   }
   printf("%d\n",l);
    printf("%d",k);
} 

