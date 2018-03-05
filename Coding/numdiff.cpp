#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,val,max=0; 
    scanf("%d",&n);
    int a[100]={0};
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&val);
       a[val]++;
    }
    for(int i=0;i<n-1;i++)
    {
        if((a[i]+a[i+1])>max)
            max=a[i]+a[i+1];
    }
    printf("%d",max);
    return 0;
}

