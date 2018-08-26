#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
	
};
struct node* root;
struct node* getnode()
{
	struct node* temp=(struct node *)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&temp->data);
	temp->left=temp->right=NULL;
}
void insert()
{
	struct node*t=root,*n=getnode();
	if(root==NULL)
	{
		root=n;
	}
	else
	{
		struct node *p=root;
		while(p)
		{
			t=p;
			if(p->data>n->data)
			{
				p=p->left;
			}
			else
			{
				p=p->right;
			}
		}
		if(t->data>n->data)
		{
			t->left=n;
		}
		else
		{
			t->right=n;
		}
	}
	
}
void inorder(struct node* root1)
{
	if(root1!=NULL)
	{
		inorder(root1->left);
		printf("%d\n",root1->data);
		inorder(root1->right);
	}
}
main()
{
	insert();insert();insert();insert();	insert();insert();insert();insert(); inorder(root);
}
