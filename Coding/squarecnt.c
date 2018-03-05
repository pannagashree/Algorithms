#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,a,b,count;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
       /* count=0;
        for(int j=a;j<=b;j++)
        {
            float c=sqrt(j);
            int d=(int)c;
            if((d*d==j))
                count++;
        }
        printf("%d\n",count);*/
	printf("%d\n",(int)(floor(sqrt(b))-ceil(sqrt(a))+1));	//Shortcut to find number of perfect squares within the range
    }
    return 0;
}

