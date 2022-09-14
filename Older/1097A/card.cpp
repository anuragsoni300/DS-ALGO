#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int t = 5;
	bool flag = false;
	while(t--)
	{
		string a;
		cin>>a;
		for(int i=0;i<2;i++)
			if(s[i] == a[i] || s[i+1] == a[i])
			{
				flag = true;
			}
	}
	if(flag == true)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}

