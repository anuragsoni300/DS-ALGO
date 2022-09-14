#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> m;
	for(int i=1;i<=4;i++)
	{
		int temp;
		cin>>temp;
		m.insert(pair<int, int>(i,temp));
	}
	string s;
	cin>>s;
	int i=0;
	int sum = 0;
	while(s[i] != '\0')
	{
		int q = (int)s[i]-48;
		sum += m[q];
		i++;
	}
	cout<<sum<<endl;
	return 0;
}

