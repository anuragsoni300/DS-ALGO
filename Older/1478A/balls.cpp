#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		map<ll,ll> m;
		int a;
		cin>>a;
		ll maxx = 0;
		for(int i=0;i<a;i++)
		{
			ll temp;
			cin>>temp;
			m[temp]++;
			if(m[temp] > maxx)
				maxx = m[temp];
		}
		cout<<maxx<<endl;
	}
	return 0;
}

