#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> kids;
	int index=0,n,m,round=0;;
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		kids.push_back(i+1);
	}
	/*for (int i = 0; i < (int)kids.size(); i++)
	{
		cout<<kids.at(i)<<endl;
	}*/
	while(n>1)
	{
		index=((m-1)+index)%n;
		kids.erase(kids.begin()+index);
		round++;
		n--;
	}
	cout<<kids.front();
	cout<<"\t"<<round;
}