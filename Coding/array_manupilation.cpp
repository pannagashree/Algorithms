/*Instead of storing the actual values in the array, you store the difference between the current element and the previous element. So you add sum to a[p] showing that a[p] is greater than its previous element by sum. You subtract sum from a[q+1] to show that a[q+1] is less than a[q] by sum (since a[q] was the last element that was added to sum). By the end of all this, you have an array that shows the difference between every successive element. By adding all the positive differences, you get the value of the maximum element*/
#include <iostream>
using namespace std;
int main()
{
	int n,m,sum=0;
	cin>>n>>m;
	int num[n+1]={0};
	for(int i=0;i<m;i++)
	{
		int a,b,k;
		std::cin.clear();
    	cin.ignore(256, '\n');
		cin>>a>>b>>k;
		num[a]+=k;
		if((b+1)<=n)
			num[b+1]-=k;
	}
	int max=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+num[i];
		if(max<sum)
			max=sum;
	}
	cout<<max;
}