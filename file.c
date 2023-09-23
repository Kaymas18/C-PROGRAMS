//file
#include<stdio.h>
void main()
{
	FILE *f;
	f=fopen("sam.txt","w");
	fputs("%s",f);
	close(*f);
}
