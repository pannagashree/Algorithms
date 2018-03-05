#include<stdio.h>
void main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int w[n],cap[m],weight=0,temp,time=0,count=0;
	for(int i=0;i<n;i++)
		scanf("%d",&w[i]);
	for(int i=0;i<m;i++)
		scanf("%d",&cap[i]);
	for(int j=0;j<n;j++)
	{
		for(int k=0;k<(n-1-j);k++)
		{
			if(w[k]<w[k+1])
			{
				temp=w[k+1];
				w[k+1]=w[k];
				w[k]=temp;
			}
		}
	}
	for(int j=0;j<m;j++)
	{
		for(int k=0;k<(n-1-j);k++)
		{
			if(w[k]>w[k+1])
			{
				temp=cap[k+1];
				cap[k+1]=cap[k];
				cap[k]=temp;
			}
		}
	}
	while(count<n)
	{	
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(w[j]<=cap[i])
				{
					count=count+1;
					time++;
					w[j]=1000000;
					break;
				}
				
			}
		}
	}
	//printf("%d",time);
}
			
		
		
