#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,count = 0;
	cin>>a>>b;
	while(a--)
	{
		int t;
		cin>>t;
		if(t>b)
			count+=2;
		else
			count+=1;
	}
	cout<<count<<endl;
	return 0;
}

