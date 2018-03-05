#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
int count =0,v=0;
for(int i=0;i<n;i++){
    if(count<1){
        if(s[i]=='U')     
           count++;
        if(s[i]=='D')
            count--;
        if(count==0)
            v++;
    }
    else if(s[i]=='U')
        count++;
    else if(s[i]=='D')
        count--;

}
cout<<v;
}
