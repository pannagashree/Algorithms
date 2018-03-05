#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        char str[100000];
        scanf("%d",&n);
        scanf("%s",str);
        int count=0;
        for(int j=0;j<n;j++)
        {
            int k=j+1;
            while((j<(n-1))&&(str[j]<str[k]))
            {
                count=count+1+j;
                k++;
                j++;
            }
            count=count+1+j;
        }
        printf("%d\n",count);
    }
    return 0;
}

