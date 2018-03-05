#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,p=1,flag=0,loc; 
    scanf("%d",&n);
    int *scores = malloc(sizeof(int) * n);
    int pos[n];
    for(int scores_i = 0; scores_i < n; scores_i++){
       scanf("%d",&scores[scores_i]);
    }
    int m; 
    scanf("%d",&m);
    int apos[n];
    int *alice = malloc(sizeof(int) * m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       scanf("%d",&alice[alice_i]);
    }
    pos[0]=p;
    for(int i=1;i<n;i++)
    {
	if(scores[i]==scores[i-1])
		pos[i]=pos[i-1];
        else
		pos[i]=++p;
    }
   /* for(int i=0;i<n;i++)
		printf("%d\t",pos[i]);*/
    for(int i=0;i<m;i++)
    {
	if(alice[i]==alice[i-1])
		{
			apos[i]=apos[i-1];
			flag=1;
		}
	else
	{
	for(int j=0;j<n;j++)
	{
		if(alice[i]>=scores[j])
		{
			apos[i]=pos[j];
			if(alice[i]>scores[j])
			{
				loc=j;
				for(int k=j;k<=n;k++)
					pos[k]++;
			}
			else 
			{
				for(int k=loc;k<n;k++)
					pos[k]--;
			}
			flag=1;
			break;
		}
	}
	if(flag==0)
		apos[i]=++p;
	}
    }
    for(int i=0;i<m;i++)
    {
	printf("%d\n",apos[i]);
    }
    return 0;
}

