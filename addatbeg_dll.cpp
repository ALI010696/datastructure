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
void addatbeg()
{
	struct node *p=getnode();
	if(start==NULL)
	{
		start=p;
	}
	else
	{
		p->right=start;
		start->left=p;
		start=p;
	}
}
void display()
{
	struct node *p=start;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->right;
	}
}
main()
{
	addatbeg();
	addatbeg();
	display();
}
