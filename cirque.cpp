#include<stdio.h>
# define max 5
int ar[max];
int front=-1;
int rear=-1;
void enque(int d)
{
	if((rear+1)%max==front)
	{
		printf("cir que full");
	}
	else if(rear==-1&&front==-1)
	{
		rear=front=0;
	}
	else
	{
		rear=(rear+1)%max;
	}
	ar[rear]=d;
}
void deque()
{
	if(front==-1&&rear==-1)
	{
		printf("c que is empty");
		
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	front=(front+1)%max;
}
void display()
{int i;
	for(i=front;i!=rear;i=(i+1)%max)
	{
		printf("\n%d\n",ar[i]);
		
	}
	printf("%d",ar[i]);
}
main()
{
	enque(1);	enque(9);	enque(10);	enque(11);	enque(12);display();deque();display();enque(10);	deque();enque(11);deque();
}
