#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int e = 100;
    int pos = 0;
    do {
        pos = (pos + k) % n;
        if(c[pos] == 1){
            e -= 2;
        }
        e--;
    } while (pos != 0);
    printf("%d",e);
    return 0;
}
