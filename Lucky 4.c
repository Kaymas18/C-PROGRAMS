#include<stdio.h>
int main()
{
	int t,n,i=0,r;
	scanf("%d",&t);
	//Enter t from the user
	while(t>0)
	//till the number of attempts become 0
	{
		scanf("%d",&n);
		//enter a ranndom number
		while(n>0 /*till that number is greater than 0*/)
		{
			r=n%10;//to get last digit of an integer
			if(r==4)
			{
				i=i+1;//for counting number of 4 in an integer
			}
			n=n/10;//to get an integer which does not contain the last digit (r)
		}
		printf("%d\n",i);//print number of 4's
		i=0;//initialize i again by 0
		n=0;//initialize n again by 0
		r=0;//initialize r again by 0
		t--;
	}
	return 0;
}
