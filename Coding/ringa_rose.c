#include <stdio.h>
int main()
{
	int n,m,index,con_n;
	scanf("%d %d",&n,&m);
	int pre[n],prev_del[n],Kids[n];
	for(int i=0;i<n;i++)
	{
		kids[i]=i+1;
		pre[i]=1;
		prev_del[i]=0;
	}
	int pos=0,round=0;
	con_n=n;
	while(n>1)
	{
		index=((m-1)+pos)%n;
		printf("%d\t",index);
		pos=prev_del[kids[index]]+index;
		printf("%d\n",pos);
		for(int i=index+1;i<con_n;i++)
			if(pre[i]==1)
				prev_del[i]++;
		pre[pos]=0;
		for(int i=0;i<con_n;i++)
			printf("%d\t",prev_del[i]);
		printf("\n");
		for(int i=0;i<6;i++)
			printf("%d\t",pre[i]);
		printf("\n\n");
		round++;
		n--;
	}
	/*for(int i=0;i<n;i++)
	{
		printf("%d\t",pre[i]);
		if(pre[i]==1)
			printf("\nWinnner:%d\t",i+1);
	}*/
	printf("Rounds:%d",round);
	return 0;
}