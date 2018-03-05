#include<stdio.h>
void main()
{
	int n,a[10000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nOutput:");
	for(int i=n/2;i>=0;i=i-(n/2))
	{
		printf("\n");
		for(int j=i,count=0;count<n/2;j++)
		{
			printf("%d\n",a[j]);
			count++;
		}
	}
}
