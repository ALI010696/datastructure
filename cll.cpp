#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* start;
struct node* getnode()
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter data");
	scanf("%d",&temp->data);
	temp->next=NULL;
	return temp;
}


void addatbeg()
{
	struct node*t=getnode();
	if(start==NULL)
	{
		start=t;
		t->next=start;
		
	}
	else
	{
		struct node*p=start;
		while(p->next!=start)
		{
			p=p->next;
		}
		p->next=t;
		t->next=start;
		start=t;
	}
}
void addatend()
{
	struct node*t = getnode();
	struct node*p=start;
	while(p->next!=start)
	{
		p=p->next;
	}
	p->next=t;
	t->next=start;
}
void dltatbeg()
{
	struct node*p=start;
	while(p->next!=start)
	{
		p=p->next;
	}
	p->next=start->next;
	free(start);
	
	start=p->next;
	
}
void dltatend()
{
	struct node*p=start,*q;
	while(p->next->next!=start)
	{
		p=p->next;
	}
	q=p->next;
	p->next=start;
	free(q);
}
void display()
{
	struct node*p=start;
do
	{
		printf("\n%d\n",p->data);
		p=p->next;
	}
	while(p!=start);
}
main()
{
	addatbeg();	addatbeg();	addatbeg();	addatbeg();display();addatend();addatend();addatend();display();dltatend();display();dltatbeg();display();
	   
}
