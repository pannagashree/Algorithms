#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,n;
        cin>>a>>b>>c;
        cin>>n;
        int arr[n],res[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        for(int j=0;j<n;j++)
            res[j]=(a*arr[j]*arr[j])+(b*arr[j])+c;
        for(int j=1;j<n;j++)
        {
            for(int k=0;k<=(n-j-1);k++)
            {
                if(abs(res[k])<abs(res[k+1]))
                {
                    int temp=res[k];
                    res[k]=res[k+1];
                    res[k+1]=temp;
                }
            }
        }
        for(int j=0;j<n;j++)
            cout<<res[j]<<" ";
    }
    return 0;
}