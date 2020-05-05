/*Program to perform min heap operations - insert v, delete v and printing the min element
  Heap uses array representation of bianrty tress*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 100000
/*Places p in its proper position to satify heap property by traversing down the heap*/
void min_heapify_down(int a[], int p, int len)
{
    int left = (2*p)+1;
    int right = (2*p)+2;
    int tmp;
    int smallest =p;
    if(left <len && a[left]<a[smallest])
        smallest=left;
    if(right <len && a[right]<a[smallest])
        smallest=right;
    if(smallest != p)
    {
        tmp=a[p];
        a[p]=a[smallest];
        a[smallest]=tmp;
        min_heapify_down(a,smallest,len);
    }
}
/*Places p in its proper position to satify heap property by traversing up the heap*/
void min_heapify_up(int a[], int p, int parent)
{
    int tmp;
    if(a[p] < a[parent])
    {
        tmp=a[p];
        a[p]=a[parent];
        a[parent]=tmp;
        p=parent;
        min_heapify_up(a,p,(p-1)/2);
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d",&t);
    int a[MAX_SIZE]={0};
    int count=0, parent;
    for(int i=0;i<t;i++)
    {
        int q,v,parent;
        scanf("%d",&q);
        if(q<3)
            scanf("%d",&v);
        if(q==1)
        {
            a[count]=v;
            parent = (count-1)/2;
            count++;
	    /* NOTE:
	       This for loop is needed to hepify an alread existing binary tree.
	       Since this problem is about building a heap from root, heapifying
	       an alread existing tree is not needed. Hence commented for loop.*/
           // for(int j=((count)/2);j>=0;j--)
	    /* Element to be inserted v, is added as the last node & then it
               traverses up to place itself in the right position to satify 
		heap conditon*/
                min_heapify_up(a,count-1,parent);
   
        }
        else if(q==2)
        {
            int ind;
            for(int j=0;j<count;j++)
            {
                if(a[j]==v)
                    ind=j;
            }
	    
	    /*Deleted node is replaced by farther most right node which will 
              be last element in the array representation of heap*/
            a[ind]=a[count-1];
            count--;
            parent = (ind-1)/2;
	    
	    /*If replaced element is less than parent, then it has to start 
	      traversing upwards to fit in the right position satifying min
	      heap condition, else it has to traverse downwards.*/
            if(a[ind] < a[parent])
            {
                    min_heapify_up(a,ind,parent);
            }
            else
            {
                //for(int j=ind;j<=((count-1)-1)/2;j++)
                    min_heapify_down(a,ind,count);
            }
        }
        else if(q==3)
            printf("%d\n",a[0]);
        else
            printf("Invalid query");
    }    
    return 0;
}
