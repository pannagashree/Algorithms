#include <stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char str[100000];
        int flag=0;
        scanf("%s",str);
        for(int j=0;j<strlen(str);)
        {
            if(str[j]=='R')
            {
                if(str[j+1]=='Y')
                {
                    if(str[j+2]=='Y')
                        j=j+3;
                    else
                        j=j+2;
                }
                else
                    j=j+1;
            }
            else
            {
                printf("\nNO");
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("\nYES");
    }
    return 0;
}

