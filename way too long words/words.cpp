#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	while(n>0)
	{
		string s;
		getline(cin,s);
		if(s.length()>10)
		{
			auto itr1 = s.begin();
			auto itr2 = s.rbegin();
			cout<<*itr1<<s.size()-2<<*itr2<<endl;
		}
		else
			cout<<s<<endl;
		n--;
	}
	return 0;
}

