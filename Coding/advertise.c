#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m=5,count=0,c;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=floor(m/2);
       count+=c;
      // printf("%d\t",count);  
        m=c*3;
        //printf("%d\n",m);
    }
    printf("%d",count);
    return 0;
}
