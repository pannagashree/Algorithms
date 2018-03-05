#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int reverse(int n)
{
    int rev=0,r;
    while(n>0)
    {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
    return rev;
}
int main() {

    int i,j,k,rev,diff,count=0;
    scanf("%d %d %d",&i,&j,&k);
    for(int n=i;n<=j;n++)
    {
        rev=reverse(n);
        diff=abs(n-rev);
        if(diff%k==0)
            count++;
    }
    printf("%d",count);
    return 0;
}

