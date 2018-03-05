#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	struct node *lchild;
	struct node *rchild;
	int val;
}NODE;
void insert(int,NODE **);
void display(NODE *);
int main(int argc, char const *argv[])
{
	int n,val;
	NODE *tree=NULL;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		//printf("abc_s\n");
		scanf("%d",&val);
		insert(val,&tree);
	}
	printf("The binary search tree so obtained is\n");
	display(tree);
	return 0;
}
void insert(int value,NODE **node )
{
	printf("abc_i\n");
	if(*node==NULL)
	{
			//printf("abc_n\n");
			*node =  (NODE*)malloc(sizeof(NODE));
			(*node)->val=value;
			(*node)->lchild=NULL;
			(*node)->rchild=NULL;
	}
	else if(value<(*node)->val)
	{
			insert(value,&(*node)->lchild);
			//printf("abc_e\n");
	}
	else if(value>(*node)->val)
			insert(value,&(*node)->rchild);
	return;
}
void display(NODE *node)
{	if(node==NULL)
		return;
	printf("%d\n",node->val);
	if(node->lchild!=NULL)
		display(node->lchild);
	if(node->rchild!=NULL)
		display(node->rchild);
	return;
}
