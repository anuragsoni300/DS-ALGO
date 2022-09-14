#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	map<int,int> m1,m2;
	while(n--)
	{
		int temp;
		cin>>temp;
		m1[temp]++;
		cin>>temp;
		m2[temp]++;
	}
	auto it1 = m1.begin();
	auto it2 = m2.begin();
	for(;it1!=m1.end();it1++,it2++)
	{
		if(m2[it1->first])
		{
			if(m1[it1->first] > 1 && m2[it1->first] > 1)
				ans += (m1[it1->first]*m2[it1->first]);
			else
				ans += max(m1[it1->first],m2[it1->first]);
		}
	}
	cout<<ans<<endl;
	return 0;
}

