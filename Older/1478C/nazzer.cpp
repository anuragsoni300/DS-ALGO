#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool flag = true;
		int n;
		cin>>n;
		//...
		set<long long> s;
		map<long long,int> m;
		for(int i=0;i<n*2;i++)
		{
			long long temp;
			cin>>temp;
			s.insert(temp);
			m[temp]++;
			if(m[temp] > 2)
				flag = false;
		}
		if(s.size() != n)
			flag = false;
		long long sum = 0;
		vector<long long> v;
		for(auto a : s)
			v.push_back(a);
		for(int i=v.size()-1;i>=0;i--)
		{
			v[i] -= sum;
			if(v[i] > 0 && v[i]%(2*(i+1)) == 0)
			{
				v[i] /= (i+1);
				sum += v[i];
			}
			else
			{
				flag = false;
				break;
			}
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}

