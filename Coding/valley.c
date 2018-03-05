#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,count=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    if((str[0]=='D')&&(str[n-1]=='U'))
	count++;
    for(i=0;i<strlen(str);i++)
    {
        if((str[i]=='D')&&(str[i+1]!='U')&&(str[i+1]!='\0'))
        {
            while((str[i]=='D')&&(str[i+1]!='U')&&(str[i+1]!='\0'))
            {
                i++;
            }
	    if(str[i+1]=='U')
	    {
	    	//printf("%d\t",i);
            	count++;
	    }
        }
    }
    printf("%d",count);
    return 0;
}

