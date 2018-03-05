#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[6][6],sum[16],pos=0;
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&a[arr_i][arr_j]);
       }
    }
    for(int i=0;i<4;i++)
    {
           for(int j=0;j<4;j++)
           {
                sum[pos]=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
               pos++;
           }
    }
    int max=sum[0];
    for(int i=1;i<pos;i++)
        if(sum[i]>max)
            max=sum[i];
    printf("%d",max);
    return 0;
}

