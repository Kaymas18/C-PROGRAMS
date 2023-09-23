#include <stdio.h>
#define MAX 12
int sk[MAX], top = -1;
void push(int*, int);
void pop(int*);
void display(int*);
int main()
{
int a;
push(sk, 1);
push(sk, 2);
push(sk, 3);
push(sk, 4);
push(sk, 5);
display(sk);
pop(sk);
display(sk);
pop(sk);
display(sk);
push(sk, 78);
display(sk);
}
void push(int* sk, int num)
{
printf("\nPush %d",num);
if(top == MAX-1)
{
printf("\nStack is overflow");
}
else
{
top++;
sk[top] = num;
}
}
void pop(int* sk)
{
printf("\nPop");
int num;
if(top == -1)
{
printf("\nStack is underflow");
}
else
{
num = sk[top];
top--;
}
printf("\nThe pop element is %d", num);
}
void display(int* sk)
{
printf("\nDisplay elements");
printf("\n");
int i;
if(top == -1)
{
printf("\nStack is underflow");
}
else
{
for(i=top;i>=0;i--)
{
printf(" %d",sk[i]);
}
}
}

