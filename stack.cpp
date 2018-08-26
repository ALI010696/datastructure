#include<stdio.h>
#include<stdlib.h>
# define max 10
int ar[max];
int top=-1;
void push(int d)
{
	if(top==max-1)
	{
		printf("stack is full");
	}
	else
	{
		top++;
		ar[top]=d;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else top--;
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d\n",ar[i]);
	}
}
main()
{
	int c,n;
while(1)
{
	printf("enter 1 for push\nenter 2 for pop\n enter 3 for display\n enter 4 for exit\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf("enter data \n");
		scanf("%d",&n);
		push(n);
		break;
		case 2: pop();
		break;
		case 3: display();break;
		case 4: exit(0);
	}
}
}
