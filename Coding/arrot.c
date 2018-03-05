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
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    for(int a0 = 0; a0 < q; a0++){
        scanf("%d",&val[a0]);
    }
    for(int i=0;i<k;i++)
    {
        int temp=a[n-1];
        for(j=n-2;j>=0;j--)
        {
            a[j+1]=a[j];
        }
	a[j+1]=temp;
	/*for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");*/
    }
    for(int i=0;i<q;i++)
    {
        int index=val[i];
	printf("%d\n",a[index]);
     }
    return 0;
}
