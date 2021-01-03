#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		int i=0;
		while(s[i])
		{
			cout<<s[i];
			i+=2;
		}
		cout<<s[i-1];
		cout<<endl;
	}
	return 0;
}

