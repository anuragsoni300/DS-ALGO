#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	unordered_set<char> set;
	for(int i=0;s[i]!='\0';i++)
	{
		set.insert(s[i]);
	}
	if(set.size()%2 == 0)
		cout<<"CHAT WITH HER!"<<endl;
	else
		cout<<"IGNORE HIM!"<<endl;
	return 0;
}

