#include<stdio.h>
int main()
{
	int i=5,j=0;
	printf("%d %d %d %d",i&j,i|j,!i,!j);
}

/*Options
A:0 5 0 1
B:5 0 0 1
C:0 0 5 1
D:1 0 0 5*/	 

//Answer=A:0 5 0 1
