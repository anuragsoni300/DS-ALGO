#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	set<char> set;
	getline(cin,s,'}');
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			set.insert(s[i]);
		i++;
	}
	cout<<set.size()<<endl;
	return 0;
}

