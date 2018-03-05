#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
	int n,q;
	string x;
	cin>>n;
	string names[n];
	for(int i=0;i<n;i++)
		cin>>names[i];
	cin>>q;
	string test_names[q];
	for(int i=0;i<q;i++)
		cin>>test_names[i];
	map<string,unsigned int> count;
	map<string,unsigned int> ::iterator c;
	for(int i=0;i<n;i++)
		count[names[i]]++;
	for(int i=0;i<q;i++)
	{
		c=count.find(test_names[i]);
		if(c!=count.end())
			cout<<count[test_names[i]]<<"\n";
		else
			cout<<"0"<<"\n";
	}
}