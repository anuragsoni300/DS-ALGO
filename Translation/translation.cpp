#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin>>s;
	cin>>t;
	int i = 0;
	int j = s.size()-1;
	while(i<j)
	{
		swap(s[i],s[j]);
		i++;
		j--;
	}
	if(s == t)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}

