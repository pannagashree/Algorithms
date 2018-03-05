//Sorting each k elements alternatiely in ascending and descending order
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int k,flag=0,n,count=0,temp;
	int* arr;
	scanf("%d %d",&n,&k);
	arr=(int *)malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	while(count<=n)
	{
		if(flag==0)
		{
			//printf("%d\n",count);
			for(int i=0;i<k;i++)
			{
				for (int j = count;(j < (count+k)-i-1)&&(j<n); ++j)
				{
					if(arr[j]>arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			/*for(int j=count;j<count+k;j++)
					printf("%d\t",arr[j]);*/
			printf("\n");
			count=count+k;
			flag=1;
		}
		else if(flag==1)
		{
			//printf("%d\n",count);
			for(int i=0;i<k;i++)
			{
				for (int j = count;(j < (count+k)-i-1)&&(j<n) ; ++j)
				{
					if(arr[j]<arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			/*for(int j=count;j<count+k;j++)
					printf("%d\t",arr[j]);*/
			printf("\n");
			count=count+k;
			flag=0;
		}	
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",arr[i]);
	}
}
