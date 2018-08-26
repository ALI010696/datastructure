#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*left;
	struct node* right;
};
struct node* start;

struct node* getnode()
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter data");
	scanf("%d",&temp->data);
	temp->right=temp->left=NULL;
}

void addatend()
{
	struct node* t=getnode(),*q=start;
	if(start==NULL)
	{
		start=t;
	}
	else{
	

		while(q->right!=NULL)
		{
			q=q->right;
		}

    t->left=q;
	q->right=t;
       }
}
void display()
{
	struct node *p=start;
	while(p!=NULL)
	{
		printf("\n%d",p->data);
		p=p->right;
	}
}
main()
{

	addatend();	addatend();	addatend();	addatend();	addatend();	addatend();	addatend();
	display();
}
