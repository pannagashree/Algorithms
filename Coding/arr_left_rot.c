#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,d;
    scanf("%d %d",&n,&d);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    /*reading elements and storing it directly into the rotated final positions*/ 
    /*for(int i=0;i<n;i++)
        scanf("%d",&a[(i+n-d)%n]);*/ //for left roation
    /*for(int i=0;i<n;i++)
        scanf("%d",&a[(i+d)%n]);*/ //for right roation
    while(d)
    {
        int temp=a[0],i;
        for(i=0;i<n-1;i++)
                a[i]=a[i+1];           
        a[i]=temp;
        d--;
    }
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
