#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int growth=1;
        int n; 
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
                growth=growth*2;
            else if(i%2==0)
                growth+=1;
        }
        printf("%d\n",growth);
    }
    return 0;
}

