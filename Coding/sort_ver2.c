//Sorting first k elements in ascending and remaining elements in desending ord
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int k,flag=0,n,count=0,temp,rn;
	int* arr;
	scanf("%d %d",&n,&k);
	arr=(int *)malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < k; ++i)
	{
		for(int j=0;j<k-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	rn=n-k;
	for (int i = 0; i < rn; ++i)
	{
		for(int j=k;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",arr[i]);
	}
}