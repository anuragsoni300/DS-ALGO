#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char,int> map,check;
	string s;
	int n = 2;
	while(n--)
	{
		cin>>s;
		int i=0;
		while(s[i])
		{
			map[s[i++]]++;
		}
	}
	cin>>s;
	int i=0;
	while(s[i])
	{
		check[s[i++]]++;
	}
	i=0;
	if(check.size() != map.size())
	{
		cout<<"NO"<<endl;
		exit(0);
	}
	while(s[i])
	{
		if(check[s[i]] != map[s[i]])
		{
			cout<<"NO"<<endl;
			exit(0);
		}
		i++;
	}
	cout<<"YES"<<endl;
	return 0;
}

