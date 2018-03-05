#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
char rch;
int isconsective(string word,int *flag)
{
	for(int i=0;i<word.length();i++)
	{
		if(word[i]==word[i+1])
		{
			rch=word[i];
			*flag=0;
			return *flag;
		}
		else
			continue;
	}
	return *flag;
}
int altletnteq(map<char,int> &temp_count,string word,int *flag)
{
	for(int i=0;i<word.length();i++)
	{
		if(word[i+2]!='\0')
		{
			if(word[i]!=word[i+2])
			{
				//cout<<word[i]<<"\t"<<word[i+2]<<endl;
				if(temp_count[word[i]]>temp_count[word[i+2]])
					rch=word[i+2];
				else
					rch=word[i];
				*flag=0;
				return *flag;
			}
			else
				continue;
		}
	}
	return *flag;
}
int main()
{
	int n,cflag=1,aflag=1,size;
	string word;
	map<char,int>count;
	map<char,int>::iterator it;	
	cin>>n;
	cin>>word;
	for(int i=0;i<word.length();i++)
		count[word[i]]++;
	size=count.size();
	//cout<<size<<endl;
	/*for(it=count.begin();it!=count.end();it++)
	{
		cout<<it->first<<":"<<it->second<<endl;
	}*/
	//cout<<"abc";
	while(1)
	{
		cflag=isconsective(word,&cflag);	
		if(cflag==0)
		{
				word.erase(std::remove(word.begin(), word.end(), rch), word.end());
				count.erase(rch);
				size=count.size();
				//cout<<"c"<<"\t"<<rch<<"\t"<<size<<endl;
		}
		else
		{
			aflag=altletnteq(count,word,&aflag);
			if(aflag==0)
			{
				word.erase(std::remove(word.begin(), word.end(), rch), word.end());
				count.erase(rch);
				size=count.size();
			}
			//cout<<"a"<<"\t"<<rch<<"\t"<<size<<"\t"<<word<<endl;
		}
		//cout<<cflag<<"\t"<<aflag<<endl;
		if(cflag==1&&aflag==1)
			break;
		cflag=aflag=1;
		//cout<<cflag<<"\t"<<aflag<<endl;
	}
	cout<<word.length();
}