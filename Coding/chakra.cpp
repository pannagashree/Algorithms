/*To find the minimum element k to be subracted from each array elementso that the resultant sum of array elements will be atmost s*/
#include <iostream>
using namespace std;
int main()
{
	int n,s,sum=0,k=0;
	cin>>n>>s;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i <n; ++i)
	{
		sum=sum+max((arr[i]-k),0);
	}
	cout<<(sum-s)/n;
}