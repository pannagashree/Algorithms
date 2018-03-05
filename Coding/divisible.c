#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int add(int n,int s[],int j,int m)
{
    int sum1=0;
    if(m==0)
        return 0;
    if(j>=n)
        return 0;
    sum1=s[j]+add(n,s,j+1,m-1);
    return sum1;
}
int getWays(int n, int* s, int d, int m){
    int sum=0,count=0,j;
    for(int i=0;i<n;i++)
    {
	j=i+1;
        sum=s[i]+add(n,s,j,m-1);
        if(sum==d)
        {
		printf("%d\t%d\t%d\n",i,j,sum);
                count++;
        }
    }
    return count;
}

int main() {
    int n; 
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d",&d,&m);
    int result = getWays(n, s, d, m);
    printf("%d\n", result);
    return 0;
}

