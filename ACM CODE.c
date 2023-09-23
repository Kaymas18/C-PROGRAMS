#include<stdio.h>
int function(int a, int b)
{
	if (a<b)
	return function(b,a);
	
	else if(b!=0)
	return(a+function(a,b-1));
	
	else 
	return 0;
}
int main()
{
	int a=8,b=9;
	char s[][10]={"desert","jungle"};
	int c=function(a,b);
	printf("%s",s[c%9]);
	return 0;
}
