#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int flag1=1,flag2=1,count=0;
    int n; 
    int m; 
    scanf("%d %d",&n,&m);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for(int b_i = 0; b_i < m; b_i++){
       scanf("%d",&b[b_i]);
    }
    for(int i=1;i<=100;i++)
    {
        for(int j=0;j<n;flag1=1,j++)
        {
            if(i%a[j]!=0)
            {
                flag1=0;
                break;
            }
        }
        if(flag1==0)
            continue;
	else
        {
            for(int j=0;j<m;flag2=1,j++)
            {
                if(b[j]%i!=0)
                {
                    flag2=0;
                    break;
                }
            }
            if(flag2==0)
                continue;
            else
	    {
                count++;
		//printf("%d\n",i);
 	    }               
        }
        
    }
    printf("%d",count);
    return 0;
}

