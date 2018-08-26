#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
}

struct node* start,*rear;
struct node* getnode()
{
	struct node* temp=(struct node* )malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	return temp;
}
void addatend()
{
	struct node*t=getnode();
	if(start==NULL)
	{
		start=rear=t;
	}
	else
	{
		rear->next=t;
		rear=rear->next;
	}
}
void dlt()
{
struct node* p=start;
start=start->next;
free(p);
}
main()
{
	
}
