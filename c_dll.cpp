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
	struct node * t = getnode();
	if(start==NULL)
	{
		start=t;
		t->left=t->right=start;
	}
	else
	{
		t->left=start->left;
		t->right=start;
		start->left->right=t;
		start->left=t;
		start=t;
	}
}
void addatend()
{
	struct node* temp=start,*p=getnode();
	while(temp->right!=start)
	{
		temp=temp->right;
	}
	p->right=temp->right;
	p->left=temp;
	temp->right->left=p;
	temp->right=p;
}
void dltatend()
{
	printf("                 deletion at end          ");
	struct node * p=start,*l;
	l=p->left;
	l->left->right=start;
	start->left=l->left;
	free(l);
	
}
void dltatbeg()
{
		printf("                 deletion at end          ");
	struct node * p=start,*l;
	l=start->left;
	l->right=start->right;
	start->right->left=l;
	start=start->right;
	free(p);
}
void display()
{
	struct node * p=start;
	if(start!=NULL)

{	do
	{
	printf("\n%d\n",p->data);
	p=p->right;	
	}while(p!=start);
}}
main()
{
	addatbeg();addatbeg();addatbeg();addatbeg();addatbeg();display();addatend();display();dltatend();display();
	dltatbeg();
	display();
}
