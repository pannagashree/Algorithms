#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,N,count,d; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        N=n;
        count=0;
        while(n!=0)
        {
            d=n%10;
	    n=n/10;
	    if(d==0) continue;
            if(N%d==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
