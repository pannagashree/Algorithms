#include <iostream>
using namespace std;
void merge(int*,int*,int*,int,int);
void mergesort(int *arr,int n)
{
	if(n>1)
	{
		int *b=new int[n-(n/2)];
		int *c=new int[n/2];
		copy(arr,arr+((n-1)/2)+1,b);
		copy(arr+((n-1)/2)+1,arr+n,c);
		mergesort(b,(n-(n/2)));
		mergesort(c,n/2);
		merge(b,c,arr,(n-(n/2)),n/2);	
	}	
}
void merge(int *b,int *c,int *a,int p,int q)
{
	int i=0,j=0,k=0;
	while((i<p)&&(j<q))
	{
		if(b[i]<=c[j])
		{
			a[k]=b[i];
			i++;
		}
		else
		{
			a[k]=c[j];
			j++;
		}
		k++;
	}
	if(i==p)
		copy(c+j,c+q,a+k);
	else
		copy(b+i,b+p,a+k);
}
int main()
{
	int n;
	cout<<"Enter the number of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
		cin>>arr[i];
 	mergesort(arr,n);
 	cout<<"Array elements are\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
}