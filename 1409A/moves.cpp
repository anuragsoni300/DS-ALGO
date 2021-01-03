#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		long long int diff = abs(a-b);
		if(diff == 0)
		{
			cout<<'0'<<endl;
		}
		else if(diff <= 10)
		{
			cout<<'1'<<endl;
		}
		else if(diff%10 == 0)
			cout<<diff/10<<endl;
		else
			cout<<diff/10+1<<endl;
	}
	return 0;
}

