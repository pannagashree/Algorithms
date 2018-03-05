#include <stdio.h>
#include <stdlib.h>
typedef struct list{
	int popularity;
	struct list* link;
}SLINK;
void insert(SLINK** head,int v)
{
	//printf("abc\n");
	if(*head==NULL)
	{
		*head=(SLINK*)malloc(sizeof(SLINK));
		(*head)->popularity=v;
		(*head)->link=NULL;
	}
	else
	{
		SLINK* newnode=(SLINK*)malloc(sizeof(SLINK));
		newnode->popularity=v;
		SLINK* temp=*head;
		while(temp->link!=NULL)
			temp=temp->link;
		temp->link=newnode;
	}
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
}
int main()
{
	int t,n,k;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		SLINK* friends=NULL;
		int pop_val;
		scanf("%d %d",&n,&k);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&pop_val);
			insert(&friends,pop_val);
		}
		while(k)
		{
			SLINK *temp=friends,*prev=NULL;
			while(temp->link!=NULL)
			{
				if(temp->popularity<temp->link->popularity)
				{
					if(prev==NULL)
						friends=temp->link;
					else
						prev->link=temp->link;
					temp->link=NULL;
					k--;
					break;
				}
				else
				{
					prev=temp;
					temp=temp->link;
				}
			}
		}
		printf("\n");
		display(friends);
	}
}
