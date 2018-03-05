/*For any number K, the sum of 2 values (A & B) is evenly divisible by K if the sum of the remainders of A/K + B/K is K. (There is also a special case where both A & B are evenly divisible, giving a sum of 0.)

For any such remainder, there is 1 and only 1 other remainder value which will make a sum divisible by K.

Example: with K of 5, remainder pairs are 1+4 & 2+3. Given the numbers with a remainder of 1, they can't be paired with ANY of the numbers with remainder 4 (and vice versa). So, for the number of values in the resultant set, choose the larger of values with remainder 1 vs. values with remainder 4. Choose the larger set of remainder 2 vs remainder 3.

For the special case where remainder is 0, given the set of all values which are individually divisible by K, they can't be paired with any others. So, at most 1 value which is evenly divisible by K can be added to the result set.

For even values of K, the equal remainder is simular to the 0 case. For K = 6, pairs are 1+5, 2+4, 3+3. For values with remainder 3, at most one value can be added to the result set.*/
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int max(int a,int b)
{
	return (a>b)?a:b;
}
int main()
{
	int n,k,rp,s=0;
	cin>>n>>k;
	int num[n];
	std::vector<int> remainder (n);
	map<int,unsigned int> count;
	std::vector<int> ::iterator val;
	std::map<int, unsigned int> ::iterator it;
	for (int i = 0; i < n; ++i)
		cin>>num[i];
	for(int i=0;i<n;i++)
		remainder[i]=num[i]%k;
	/*for(int i=0;i<n;i++)
		cout<<remainder[i];*/
	rp=k/2;
	for(val=remainder.begin();val!=remainder.end();++val)
		count[*val]++;
	for(int i=1;i<=rp;i++)
		if((k-i)==i)
			s++;
		else
			s=s+max(count[i],count[k-i]);
	it=count.find(0);
	if(it!=count.end())
		s++;
	cout<<s;
}