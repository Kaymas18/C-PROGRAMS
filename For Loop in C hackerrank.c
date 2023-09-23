#include <stdio.h>
int main() 
{
    int a,b,i,d=10,k=0;
    scanf("%d\n%d", &a, &b);
	if(b>a && b>9)
	{
		k=0;
	}
	if(a<=9 || b<=9)
	{
		if (b>=a && a<=9)
		{
			while(a<=b)
			{
				
						 if(a==1)
					        {
					            printf("one\n");
					        }
				         else if(a==2)
					        {
					            printf("two\n");
					        }
				          else if(a==3)
					        {
					            printf("three\n");
					        }
				          else if(a==4)
					        {
					            printf("four\n");
					        }  
						   else if (a == 5) 
							{
					          printf("five\n");
					        }  
							else if (a == 6) 
							{
					          printf("six\n");
					        }   
							else if (a == 7) 
							{
					          printf("seven\n");
					        }   
							else if (a == 8)
							 {
					          printf("eight\n");
					         } 
						 	else if (a == 9)
							 {
					          printf("nine\n");
					         }  
					a++;
			}
		}
		else
		{
			while(b<=a)
			{
				
						 if(b==1)
					        {
					            printf("one\n");
					        }
				         else if(b==2)
					        {
					            printf("two\n");
					        }
				          else if(b==3)
					        {
					            printf("three\n");
					        }
				          else if(b==4)
					        {
					            printf("four\n");
					        }  
						   else if (b == 5) 
							{
					          printf("five\n");
					        }  
							else if (b == 6) 
							{
					          printf("six\n");
					        }   
							else if (b == 7) 
							{
					          printf("seven\n");
					        }   
							else if (b == 8)
							 {
					          printf("eight\n");
					         } 
						 	else if (b == 9)
							 {
					          printf("nine\n");
					         }  
					b++;
			}
		}
	}
	while(d<=b)
	{
		k=d;
		if(k%2==0)
		{
			printf("even\n");
		}
		else 
		{
			printf("odd\n");
		}
		d++;
	}	
	return 0;
}
