#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum = 0;
	int i=1;
	while(sum <= n)
	{
		sum += ((i*(i+1))/2);
		i++;
	}
	cout<<i-2<<endl;
	return 0;
}

