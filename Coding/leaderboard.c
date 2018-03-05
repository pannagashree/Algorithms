#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int binary_search(int item,int low,int high,int score[]);
int main(){
    int n,j,selected,loc; 
    scanf("%d",&n);
    int *scores = malloc(sizeof(int) * (n+1));
    for(int scores_i = 0; scores_i < n; scores_i++){
       scanf("%d",&scores[scores_i]);
    }
    int score[n],c=0;
    int m; 
    scanf("%d",&m);
    int *alice = malloc(sizeof(int) * m);
    int pos[m];
    for(int alice_i = 0; alice_i < m; alice_i++){
       scanf("%d",&alice[alice_i]);
    }
    for(int i=0;i<n;i++)
    {
	while(scores[i]==scores[i+1])
		i++;
	score[c++]=scores[i];
    }
   /*for(int i=0;i<c;i++)
	printf("%d\t",i);
   printf("\n");
   for(int i=0;i<c;i++)
	printf("%d\t",score[i]);
   printf("\n");*/
    for(int i=0;i<m;i++)
    {
        j=c-1;
       // printf("%d\t",j);
        selected=alice[i];
        //printf("%d\n",selected);
        loc=binary_search(selected,0,j,score);
	pos[i]=loc+1;
        //printf("%d\t",loc);
    }
    for(int i=0;i<m;i++)
		printf("%d\n",pos[i]);
    return 0;
}
int binary_search(int item,int low,int high,int score[])
{
	//printf("%d\t%d\n",low,high);
	if(high<=low)
		return (item<score[low])?low+1:low;
	int mid=(low+high)/2;
        //printf("%d\t",mid);
	if(item==*(score+mid))
		return mid;
	if(item<*(score+mid))
		return binary_search(item,mid+1,high,score);
	return binary_search(item,low,mid-1,score);
}

