#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int p)
{
    int sp=1,count=0;
    if((((n/2)%2==0)&&(p>=(n/2)))||(p>(n/2)))
    {
         sp=n;
        while((sp!=p)&&((sp-1)!=p))
        {
                sp-=2;
                count++;
        }
    }
    else
    {
	//printf("%d %d\n",sp,p);
        while((sp!=p)&&((sp-1)!=p))
        {
		// printf("abc\n");
                sp+=2;
                count++;
        }
    }
    return count;
}

int main() {
    int n,p; 
    scanf("%d",&n);
    scanf("%d",&p);
    int result = solve(n, p);
    printf("%d\n",result);
    return 0;
}

