#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(m>=n)
	{
		cout<<min(n*a,b)<<endl;
		return 0;
	}
	int minn = n*a;
	int temp = n%m;
	int mm = b*(n/m);
	if(temp != 0)
		mm += min(b,temp*a);
	cout<<min(minn,mm)<<endl;
	return 0;
}

