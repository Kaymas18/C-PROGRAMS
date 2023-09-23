//Implementation of stack using array
#include <stdio.h>   
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void show();  
void main ()  
{  
	printf("Stack Using Array\n");
    printf("\nEnter the number of elements in the stack:");   
    scanf("%d",&n);   
    while(choice != 4)  
    {  
        printf("\nChose one from the below options\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\nEnter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            } 
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
}   
void push ()  
{  
    int val;      
    if (top == n )   
    printf("\nOverflow");   
    else   
    {  
        printf("Enter the value:");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1;   
}   
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}  
