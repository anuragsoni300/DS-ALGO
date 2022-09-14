#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[n];
	cin.ignore();
	cin.getline(s,n+1);
	set<char> set;
	for(int i=97;i<123;i++)
	{
		set.insert(char(i));
	}
	if(n<26)
		cout<<"NO"<<endl;
	else
	{
		for(int i=0;i<n;i++)
			set.erase(tolower(s[i]));
		set.size()>0 ? cout<<"NO"<<endl : cout<<"YES"<<endl;
	}
	return 0;
}

