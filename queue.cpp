#include<stdio.h>
# define max 10
int ar[max];
int front=-1;
int rear=-1;
void enque(int d)
{
	if(front==-1&&rear==-1)
	{
		front=rear=0;
	}
	else if(rear==max-1)
	{
		printf("queue is full");
	}
	else 
	{
		rear++;
	}
	ar[rear]=d;
}
void deque()
{
	if(front==-1&&rear==-1)
	{
		printf("que is empty");
	}
	else
	{
		front++;
	}
}
void display()
{
	int i=front;
	while(i<=rear)
	{
		printf("\n%d\n",ar[i]);
		i++;
	}
}
main()
{
	enque(1);enque(2);enque(3);enque(4);enque(5);display(); deque();display();
}
