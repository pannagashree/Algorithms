#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
	    int m,n,x,y,s;
	    cin>>m>>n;
	    cin>>x>>y>>s;
	    int *hori,*ver;
	    if(x)
	    {
		hori=(int *)malloc(x*sizeof(int));
	    	for(int i=0;i<x;i++)
	        	cin>>hori[i];
	    }
	    if(y)
	    {
		ver=(int *)malloc(y*sizeof(int));
	    	for(int i=0;i<y;i++)
	        	cin>>ver[i];
	    }
	    int count1=0, count2=0, val=0;
/*Finds the sum of number of adjacent houses that can be constructed in each set of rows 
seperated by horizontally flowing river */
	    for(int i=0;i<x;i++)
	    {
	    	count1+=(hori[i]-1-val)/s;
		val=hori[i];
	    }
	    count1+=(m-val)/s;
/*Finds the sum of number of adjacent houses that can be constructed in each set of columns 
seperated by vertically flowing river */
	    val=0;
	    for(int j=0;j<y;j++)
	    {
	    	count2+=(ver[j]-1-val)/s;
		val=ver[j];
	    }
	    count2+=(n-val)/s;
/*Total number of houses, hence will be given by 
number of houses row wise*number of houses column wise*/
            cout<<count1*count2<<"\n";	 	
	}
	return 0;
}
