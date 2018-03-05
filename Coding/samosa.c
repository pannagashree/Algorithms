#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int initial,diff;
        char prev='a';
        char string[100];
        scanf("%s",string);
        char a[strlen(string)];
        for(int j=0;j<strlen(string);j++)
        {
	    initial=0;
            diff=(int)string[j]-(int)prev;
            if(diff<=13)
            {
                initial=initial+diff;
                a[j]=initial;
                prev=string[j];
            }
            else 
            {
                initial=initial+(26-diff);
                a[j]=(-initial);
                prev=string[j];
            }
        }
        for(int j=0;j<strlen(string);j++)
            printf("%d\t",a[j]);
	printf("\n");
        
    }
    return 0;
}
