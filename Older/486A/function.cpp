#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int  n,sum=0,temp;
	cin>>n;
	temp = n/2;
	sum = n - temp;
	if(n%2==0)
		cout<<sum<<endl;
	else
		cout<<(-1)*sum<<endl;
	return 0;
}

