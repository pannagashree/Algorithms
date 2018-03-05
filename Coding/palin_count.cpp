#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
	string str,substring,reversestr;
	int len,count=0;
	/*<string> palin;
	pair<set<string>::iterator,bool> ret;
	set<string>::iterator it;*/
	vector<string> palin;
	vector<string>::iterator it;
	cin>>str;
	len=str.size();
	for(int i=0;i<len;i++)
	{
		for(int j=1;j<=(len-i);j++)
		{
			substring=str.substr(i,j);
			reversestr=substring;
			reverse(reversestr.begin(),reversestr.end());
			if(substring==reversestr)
			{
				palin.push_back(substring);
				/*ret=palin.insert(substring);
				if(ret.second)*/
					count++;
			}
		}

	}
	for(it=palin.begin();it!=palin.end();++it)
		cout<<*it<<endl;
	cout<<count;
	return 0;
}