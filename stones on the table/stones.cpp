#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[n];
	int count = 0;
	cin.ignore();
	cin.getline(s,n+1);
	for(int i=0;i<n;i++)
	{
		if(s[i] == s[i+1])
			count++;
	}
	cout<<count<<endl;
	return 0;
}

