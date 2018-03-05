#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++){
        int x; 
        int y; 
        int z; 
        scanf("%d %d %d",&x,&y,&z);
        int dista=z-x;
        int distb=z-y;
        if(abs(dista)>abs(distb))
            printf("Cat B\n");
        else if(abs(distb)>abs(dista))
            printf("Cat A\n");
        else if(abs(dista)==abs(distb))
            printf("Mouse C\n");
        
    }
    return 0;
}

