#include <stdio.h>
#include<stdlib.h>
#define MAX 10
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
int choice;
while (1)
{
printf("1.Insert element to queue\n");
printf("2.Delete element from queue\n");
printf("3.Display all elements of queue\n");
printf("4.Quit\n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:	insert();
		break;
case 2:	delete();
		break;
case 3:	display();
		break;
case 4:	quit();
default:printf("Enter valid choice");
}
}
}
void insert()
{
int item;
if(rear == MAX - 1)
printf("Queue Overflow");
else
{
if(front== - 1)
front = 0;
printf("Insert number in queue:");
scanf("%d", &item);
rear = rear + 1;
queue_array[rear] = item;
}
}
void delete()
{
if(front == - 1 || front > rear)
{
printf("Queue Underflow");
return;
}
else
{
printf("Number deleted from queue is:%d\n", queue_array[front]);
front = front + 1;
}
}
void display()
{
int i;
if(front == - 1)
printf("Queue is empty");
else
{
printf("Queue is:");
for(i = front; i <= rear; i++)
printf("%d\t",queue_array[i]);
}
}
void quit()
{
exit(1);
}
