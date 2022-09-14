#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long a,k;
		cin>>a>>k;
		long long arr[a];
		for(int i=0;i<a;i++)
			cin>>arr[i];
		long long g = arr[1]-arr[0];
		for(int i=2;i<a;i++)
		{
			g = __gcd(g,arr[i]-arr[i-1]);
		}
		if((k-arr[0])%g == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

