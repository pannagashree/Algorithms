#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,k,size=0;
	long int val;
	cin>>n>>k;
	vector<long int> arr,newarr;
	for (int i = 0; i < n; ++i)
	{
		cin>>val;
		arr.push_back(val);
	}
	for (int i = 0; i < n; ++i)
	{
		int flag=0;
		long int selected=arr[i];
		for(int j=0;j<size;j++)
		{
			long int sum=newarr[j]+selected;
			if(sum%k==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			continue;

		else
		{
			newarr.push_back(selected);
			size++;
		}
	}
	cout<<newarr.size();
	/*cout<<"\n";
	for(int i=0;i<newarr.size();i++)
		cout<<newarr[i]<<"\t";*/
}