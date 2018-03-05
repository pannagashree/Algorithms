//dequing x spiders in each iteration and finding out soider with max power in each iteration
#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,x,pow;
	cin>>n>>x;
	deque<int> power;
	vector<int> index,xval;
	for (int i = 0; i < n; ++i)
	{
		cin>>pow;
		power.push_back(pow);
	}
	for (int i = 0; i < x; ++i)
	{
		int count,num1,c=i;
		int size=power.size();
		if(size<x)
			count=size;
		else
			count=x;
		xval.push_back(count);
		num1=size;
		deque<int> temp(power.begin(),power.begin()+count);
		power.erase(power.begin(),power.begin()+count);
		deque<int>::iterator max_it=max_element(temp.begin(),temp.end());
		int max=*max_it;
		int pos=distance(temp.begin(),max_it);
		pos=pos+1;
		index.push_back(pos);
		for(int j=0;j<i;j++)
		{
			num1++;c--;
			if(pos>(num1-xval[c]))
			{
				pos=pos-(num1-xval[c]);
				if(pos>=index[c])
					pos+=1;
			}
			else
				pos=pos+x;
		}
		cout<<pos<<" ";
		temp.erase(max_it);
		for (deque<int>::iterator itl=temp.begin();itl != temp.end();++itl)
		{
			if(*itl==0)
				continue;
			else
				*itl=(*itl)-1;
		}
		deque<int>::iterator it=power.end();
		power.insert(it,temp.begin(),temp.end());
	}
	
}