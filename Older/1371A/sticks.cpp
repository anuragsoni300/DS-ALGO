#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a;
		cin>>a;
		long long int sum = (a-1)*a/2;
		if(sum < a)
			cout<<'1'<<endl;
		else
			cout<<(sum/a)+1<<endl;
	}
	return 0;
}

