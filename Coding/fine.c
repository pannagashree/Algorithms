#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>
int main(){
    int mondiff,fine;
    int d1; 
    int m1; 
    int y1; 
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2; 
    int m2; 
    int y2; 
    scanf("%d %d %d",&d2,&m2,&y2);
    if((y2>y1)||((y2==y1)&&(m2>m1))||((y2==y1)&&(m2>m1)&&(d2>d1)))
        printf("0");
   else  if((y2==y1))
    {
        if((m2==m1))
        {
            if((d2==d1)||(d2>d1))
                printf("0");
            else
                printf("%d",15*(d1-d2));
            
        }
        else
        {
            printf("%d",500*(m1-m2));
        }
    }
    else
               printf("10000");
    return 0;
}

