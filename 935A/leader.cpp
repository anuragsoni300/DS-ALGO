#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	int count = 0;
	int temp = n;
	if(n%2 != 0)
		temp = n+1;
	while(i<=temp/2)
	{
		if((n-i)%i == 0)
			count++;
		i++;
	}
	cout<<count<<endl;
	return 0;
}

