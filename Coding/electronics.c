#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int n; 
    int m; 
    scanf("%d %d %d",&s,&n,&m);
    int *keyboards = malloc(sizeof(int) * n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       scanf("%d",&keyboards[keyboards_i]);
    }
    int *pendrives = malloc(sizeof(int) * m);
    for(int pendrives_i = 0; pendrives_i < m; pendrives_i++){
       scanf("%d",&pendrives[pendrives_i]);
    }
    int max=0,sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           sum=keyboards[i]+pendrives[j];
            if((sum>max)&&(sum<=s))
            {
                max=sum;
                count++;
            }
        }
    }
    if(count==0)
        max=-1;
    printf("%d",max);
    return 0;
}

