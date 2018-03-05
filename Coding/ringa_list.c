#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
	int val;
	struct list* link;
}CLIST;
void insert(CLIST** head,int v)
{
	//printf("abc\n");
	if(*head==NULL)
	{
		*head=(CLIST*)malloc(sizeof(CLIST));
		(*head)->val=v;
		(*head)->link=(*head);
	}
	else
	{
		CLIST* newnode=(CLIST*)malloc(sizeof(CLIST));
		newnode->val=v;
		CLIST* temp=*head;
		while(temp->link!=*head)
			temp=temp->link;
		temp->link=newnode;
		newnode->link=*head;
	}
}
void display(CLIST* head)
{
	CLIST* temp=head;
	while(temp->link!=head)
	{
		printf("%d\n",temp->val);
		temp=temp->link;
	}
	printf("%d",temp->val);
}
int main()
{
	CLIST* kids=NULL,*prev;
	int n,m,pres,round;
	scanf("%d %d",&n,&m);
	pres=n;
	for (int i = 0; i < n; ++i)
	{
		insert(&kids,i+1);
	}
	//display(kids);
	CLIST* temp=kids;
	while(pres>1)
	{
		for(int i=1;i<m;i++)
		{
			prev=temp;
			temp=temp->link;
		}
		prev->link=temp->link;
		temp=prev->link;
		round++;
		pres--;
	}
	printf("%d\t%d\n",temp->val,round);
}