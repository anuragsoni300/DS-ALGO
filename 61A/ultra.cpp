#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int i=0;
	while(a[i])
	{
		if(a[i] == b[i])
			cout<<'0';
		else
			cout<<'1';
		i++;
	}
	cout<<endl;
	return 0;
	}

