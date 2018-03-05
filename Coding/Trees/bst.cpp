#include <iostream>
using namespace std;
typedef struct NODE
{
	
	int value;
	struct NODE* lchild;
	struct NODE* rchild;
}NODE;
class bst
{
	NODE* tree;
	void insert(int key,NODE* leaf);
	void display(NODE* disp_node,string pos,int parent);
	NODE* search(int key,NODE* leaf);
public:
	bst(){
		tree=NULL;
	}
	~bst();

	void insert(int key);
	void display();
	NODE* search(int key);
	void delete_tree();
};
void bst::display(NODE * disp_node,string pos,int parent)
{
	if(disp_node!=NULL)
	{
		cout<<disp_node->value<<"\t"<<pos<<parent<<endl;
		display(disp_node->lchild,"LCHILD of",disp_node->value);
		display(disp_node->rchild,"RCHILD of",disp_node->value);
	}
	return;
}
void bst::insert(int key,NODE* leaf)
{
	if(key<leaf->value)
	{
		if(leaf->lchild!=NULL)
			insert(key,leaf->lchild);
		else
		{
			leaf->lchild=new NODE;
			leaf->lchild->value=key;
			leaf->lchild->lchild=NULL;
			leaf->lchild->rchild=NULL;
		}
	}
	else if(key>=leaf->value)
	{
		if(leaf->rchild!=NULL)
			insert(key,leaf->rchild);
		else
		{
			leaf->rchild=new NODE;
			leaf->rchild->value=key;
			leaf->rchild->lchild=NULL;
			leaf->rchild->rchild=NULL;
		}
	}
}
NODE* bst::search(int key,NODE* leaf)
{
	if(leaf!=NULL)
	{
		if(key==leaf->value)
			return leaf;
		if(key<leaf->value)
			return search(key,leaf->lchild);
		else
			return search(key,leaf->rchild);
	}
	else
		return NULL;
}
void bst::insert(int key)
{
	if(tree!=NULL)
		insert(key,tree);
	else
	{
		tree=new NODE;
		tree->value=key;
		tree->lchild=NULL;
		tree->rchild=NULL;
	}
}
void bst::display()
{
	display(tree,"ROOT",0);
}
NODE* bst::search(int key)
{
	return search(key,tree);
}

int main()
{
	int n,v;
	NODE* position;
	bst* myFirstTree=new bst;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>v;
		myFirstTree->insert(v);
	}
	myFirstTree->display();
	position=myFirstTree->search(24);
	cout<<position->value;
}