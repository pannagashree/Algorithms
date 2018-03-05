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
    int q,j; 
    scanf("%d %d %d",&n,&k,&q);
    int val[q];
    int rot=q%n;
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    for(int a0 = 0; a0 < q; a0++){
        int m;
	scanf("%d\t",&m);
	printf("%d\n",a[(n - (k % n)+ m) % n]);
	/*if((m-rot)>=0)
		printf("%d\n",a[m-rot]);
	else
		printf("%d\n",a[m-rot+n]);*/	
    }
}
    
