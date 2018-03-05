#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,p1;
    scanf("%d",&n);
    int num[n],pos[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
        pos[num[i]]=i;
    }
    for(int i=1;i<=n;i++)
    {
        p1=pos[i];
        printf("%d\n",pos[p1]);
    }
    return 0;
}

