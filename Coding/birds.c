#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,j,c=0; 
    scanf("%d",&n);
    int count[n+1],p[n];
    int *types = malloc(sizeof(int) * n);
    for(int types_i = 0; types_i <n; types_i++){
       scanf("%d",&types[types_i]);
    }
    for(int i=0;i<n;i++)
    {
	   count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
	    j=types[i];
        count[j]++;
    }
    int max=count[0];
    for(int i=0;i<n;i++)
    {
        if(count[i]>max)
            max=count[i];
    }  
    j=0;
    for(int i=1;i<=n;i++)
    {
        if(count[i]==max)
	    {
	       p[j]=i;
            j++;
            c++;
	    }
    }
    int min=p[0];
    for(int i=1;i<c;i++)
    {
        if(p[i]<min)
            min=p[i];
    }
    printf("%d",min);
    return 0;
}


