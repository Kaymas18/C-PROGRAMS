//Stack programs


#include<stdio.h>
#include <string.h>
#define MAX 100	
int to=-1;
int item;
char stack_string[MAX];
void pushChar(char item);
char popChar(void);
int isEmpty(void);
int isFull(void);
int fact();
int hanoi();
int power();
int div_con();
int fib();
int gcd();
int rev();
void exit();
int stk[100]; 
int size = 100;	
int ptr = -1; 
int main()
{
	int n;
	printf("\n\n1.To find factorial of a number \n2.Towers of Hanoi\n3.Power\n4.Divide and conquer\n5.Fibbonaci series\n6.GCD of 2 numbers\n7.Reverse of a number\n8.Exit\nEnter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1: fact();
		case 2:hanoi();
		case 3:power();
		case 4:div_con();
		case 5:fib();
		case 6:gcd();
		case 7:rev();
		case 8:exit();
	}
}
	//FACTORIAL
	void push(int x){
		if(ptr==size-1){
			printf("OverFlow \n");
		}
		else{
			++ptr;
			stk[ptr] = x;
		}
	}
	int top(){
		if(ptr==-1){
			printf("UnderFlow \n");
			return -1;
		}
		else{
			return stk[ptr];
		}
		return 0;
	}
	void pop(){
	        
		if(ptr==-1){
			printf("UnderFlow \n");
		}
		else{
			--ptr;
		}
	}
	int isempty(){
		if(ptr==-1)
			return 1;
		else
			return 0;
	}
	int fact() {
		int i, n;
		printf("Enter a number: ");
		scanf("%d", &n);
		push(1);
		for(i=2;i<=n;++i){
			push(top() * i);
		}
		printf("Factorial: %d", top());
	 return main();
	}
	//POWER
			int power() 
			{
			    int base, a, result;
			    printf("\nEnter base number: ");
			    scanf("%d", &base);
			    printf("Enter power number(positive integer): ");
			    scanf("%d", &a);
			    result = powr(base, a);
			    printf("%d^%d = %d", base, a, result);
			    	 return main();
			}
			int powr(int base, int a) 
			{
			    if (a != 0)
			        return (base * powr(base, a - 1));
			    else
			        return 1;
			}
	//HANOI
	void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
	{ 
	    if (n == 1) 
	    { 
	        printf("\nMove disk 1 from rod %c to rod %c", from_rod, to_rod); 
	        return; 
	    } 
	    towerOfHanoi(n-1, from_rod, aux_rod, to_rod); 
	    printf("\nMove disk %d from rod %c to rod %c", n, from_rod, to_rod); 
	    towerOfHanoi(n-1, aux_rod, to_rod, from_rod); 
	} 
	int hanoi() 
	{ 
	    int n ; 
	    printf("\nEnter n:");
	    scanf("%d",&n);
	    towerOfHanoi(n, 'A', 'B', 'C');  
	 return main();
	} 
	//DIVIDE AND CONQUER
	int divcon(int x,int y)
		{
		    if (y == 0)
		        return 1;
		    else if (y%2 == 0)
		        return divcon(x, y/2)*divcon(x, y/2);
		    else
		        return x*divcon(x, y/2)*divcon(x, y/2);
		}
	int div_con()
	    {
	    	int n,a;
	    	printf("Enter Base:");
	    	scanf("%d",&a);
	    	printf("Enter Power:");
	    	scanf("%d",&n);
	    	printf("%d",divcon(a,n));
	    return main();
		}
		//Fibonacci Series
		int fib()
		{
		  int n, first = 0, second = 1, next, c;
		  printf("\nEnter the number of terms:");
		  scanf("%d", &n);
		  printf("First %d terms of Fibonacci series are:", n);
		  for (c = 0; c < n; c++)
		  {
		    if (c <= 1)
		      next = c;
		    else
		    {
		      next = first + second;
		      first = second;
		      second = next;
		    }
		    printf("%d ", next);
		  }
		  return main();
		}
    	//GCD of 2 numbers
    	int gcd() 
		{
		    int n1, n2;
		    printf("Enter two whole numbers: ");
		    scanf("%d %d", &n1, &n2);
		    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
		    return main();
		}

	int hcf(int n1, int n2)
	 	{
		    if (n2 != 0)
		        return hcf(n2, n1 % n2);
		    else
		        return n1;
		}
		//Reverse of a number
		int rev()
		{
		    char str[MAX];
		    int i;
		    printf("Input a number: ");
		    scanf("%[^\n]s",str);
		    for(i=0;i<strlen(str);i++)
		        pushChar(str[i]);
		    for(i=0;i<strlen(str);i++)
		        str[i]=popChar();
		    printf("Reversed number is: %s\n",str);
		    return main();
		}
		void pushChar(char item)
		{
		    if(isFull())
		    {
		        printf("\nStack is FULL !!!\n");
		        return;
		    }
		    to=to+1;
		    stack_string[to]=item;
		}
		 char popChar()
		{
		    if(isEmpty())
		    {
		        printf("\nStack is EMPTY!!!\n");
		        return 0;
		    }
		    item = stack_string[to];
		    to=to-1;
		    return item;
		}
		int isEmpty()
		{
		    if(to==-1)
		        return 1;
		    else
		        return 0;
		}
		int isFull()
		{
		    if(to==MAX-1)
		        return 1;
		    else
		        return 0;
		}
		//Exit the program
		void exit()
			{
				exit();
			}
