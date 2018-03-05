#include <stdio.h>
#include <stdlib.h>
typedef struct list{
	int popularity;
	struct list* link;
}SLINK;
void insert(SLINK** head,int v)
{
    SLINK* newnode=(SLINK*)malloc(sizeof(SLINK));
	newnode->popularity=v;
	newnode->link=NULL;
	(*head)->link=newnode;
	return;
}
void display(SLINK* head)
{
	SLINK* temp=head;
	while(temp->link!=NULL)
	{
		printf("%d\t",temp->popularity);
		temp=temp->link;
	}
	printf("%d",temp->popularity);
	return;
}
int main()
{
	int t,n,k;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		SLINK *friends=NULL;
		int pop_val;
		scanf("%d %d",&n,&k);
		if(friends==NULL)
		{
			scanf("%d",&pop_val);
			friends=(SLINK*)malloc(sizeof(SLINK));
			friends->popularity=pop_val;
			friends->link=NULL;
		}
		SLINK* temp=friends;
		for (int i = 1; i < n; ++i)
		{
			scanf("%d",&pop_val);
			while(temp->link!=NULL)
				temp=temp->link;
			if(k>0 && pop_val>temp->popularity)
			{
				temp->popularity=pop_val;
				k--;
			}
			else
				insert(&temp,pop_val);
		}
		printf("\n");
		display(friends);
	}
}