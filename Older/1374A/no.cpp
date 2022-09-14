#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,n;
		cin>>x>>y>>n;
		int temp = n%x;
		if(temp>=y)
			cout<<n-(temp-y)<<endl;
		else
		{
			int v = x-y;
			cout<<n-(temp+v)<<endl;
		}
	}
	return 0;
}

