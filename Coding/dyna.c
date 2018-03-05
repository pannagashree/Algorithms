#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q;int **a,lastAnswer=0,seq,**seqlist;
    scanf("%d %d",&n,&q);
    int num[n],pos[n];
    for(int i=0;i<n;i++)
    {
        num[i]=1;
        pos[i]=0;
    }
    a=(int **)calloc(q,sizeof(int *));
    for(int i=0;i<q;i++)
       a[i]=(int *)calloc(3,sizeof(int));
    for(int i=0;i<q;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    seqlist=(int **)calloc(n,sizeof(int *));
    for(int i=0;i<n;i++)
       seqlist[i]=(int *)calloc(1,sizeof(int));
    for(int i=0;i<q;i++)
    {
        if(a[i][0]==1)
        {
            seq=(a[i][1]^lastAnswer)%2;
            num[seq]++;
            seqlist[seq]=(int *)realloc(seqlist[seq],sizeof(int)*num[seq]);
            seqlist[seq][pos[seq]++]=a[i][2];
        }
        else if(a[i][0]==2)
        {
            seq=(a[i][1]^lastAnswer)%2;
            int index=a[i][2]%(num[seq]-1);
            lastAnswer=seqlist[seq][index];
            printf("%d\n",lastAnswer);
        }
            
    }
    return 0;
}

