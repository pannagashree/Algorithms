#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        int n,j=0,count=0,sum=0;
        scanf("%d",&n);
        int num[n];
        for(int i=1;i<n;i++)
        {
            if((i%3==0)||(i%5==0))
            {
                num[j]=i;
                j++;
                count++;
            }
        }
        for(int i=0;i<count;i++)
            sum=sum+num[i];
        printf("%d\n",sum);
    }
    return 0;
}
