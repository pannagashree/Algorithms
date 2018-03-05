/*#include <stdio.h>
#include <string.h>
int main()
{
    int m,count=0,len;
    scanf("%d",&m);
    char words[100][100000];
    int marked[100][100000]={0};
    for(int i=0;i<m;i++)
        scanf("%s",words[i]);
    for(int i=0;i<m;i++)
    {
        len=strlen(words[i]);
        for(int j=0;j<len;j++)
        {
            if(words[i][j]==words[i][j+1])
            {
                count++;
                marked[i][j]=marked[i][j]=1;
                j=j+2;
            }
            else 
            {
                for(int k=j+1;k<len;k++)
                {
                    if((words[i][j]==words[i][k])&&(marked[i][k]==0))
                    {
                        count++;
                        marked[i][k]=1;
                        break;
                    }
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}*/
#include <stdio.h>
#include <string.h>
int main()
{
    int m,len,top;
    int count=0;
    char words[100][100000];
    char stack[10000];
    scanf("%d",&m);
    for(int i=0;i<m;i++)
        scanf("%s",words[i]);
    for(int i=0;i<m;i++)
    {
        len=strlen(words[i]);
        top=-1;
        for(int j=0;j<len;j++)
        {
            if(top==-1)
            {
                stack[++top]=words[i][j];
            }
            else 
            {
                if(words[i][j]==stack[top])
                {
                    count++;
                    top--;
                }
                else
                    stack[++top]=words[i][j];
            }
        }
        
    }
    printf("%d",count);
    return 0;
}


