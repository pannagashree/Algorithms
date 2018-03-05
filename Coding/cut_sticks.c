#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,small,count; 
    scanf("%d",&n);
    count=n;
    int a[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&a[arr_i]);
    }
    while(count>0)
    {
	small=100000;
        printf("\n%d",count);
        for(int i=0;i<n;i++)
            if((a[i]<small)&&(a[i]!=0))
                small=a[i];
	//printf("\nsmall=%d",small);
	//printf("\n");
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                a[i]=a[i]-small;
                if(a[i]==0)
                    count--;
            }
        }
    }
  
        
    return 0;
}

