#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	map<string,int> m;
	m["Tetrahedron"] = 4;
	m["Cube"] = 6;
	m["Octahedron"] = 8;
	m["Dodecahedron"] = 12;
	m["Icosahedron"] = 20;
	while(n--)
	{
		string s;
		cin>>s;
		ans += m[s];
	}
	cout<<ans<<endl;
	return 0;
}

