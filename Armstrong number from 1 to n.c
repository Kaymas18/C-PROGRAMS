#include <stdio.h>
int main()
 {
    int originalNum, remainder, result = 0,n;
    //printf("Enter n:");
    scanf("%d",&n);
    while (n>=0) 
	{
		originalNum=n;
		while(originalNum!=0)
		{
		remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
		}
		if (result == n)
        {
        	printf("%d ", n);
		}
    	/*else
        {
        	printf("%d is not an Armstrong number.\n", n);
		}*/
		originalNum=0;	
		result=0;
		remainder=0;
		n--;
    }
}
