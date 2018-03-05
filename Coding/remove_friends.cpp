#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t,n,k,val;
	vector<int>::iterator it;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n>>k;
		vector<int> popul;
		for (int j = 0; j < n; ++j)
		{
			cin>>val;
			popul.push_back(val);
		}
		for (int j = 0; j < k; ++j)
		{
			for (int m = 0; i < n; ++m)
			{
				if(popul[m]<popul[m+1])
				{
					popul.erase(popul.begin()+m);
					n--;
					break;
				}
			}
		}
		cout<<"\n";
		for(it=popul.begin();it!=popul.end();++it)
			cout<<*it<<"\t";
	}
	return 0;
}