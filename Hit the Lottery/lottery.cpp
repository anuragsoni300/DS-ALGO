#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t = 0,sum = 0;	
	t = n/100;
	sum += t;
	n -= 100*t;
	t = n/20;
	sum += t;
	n -= 20*t;
	t = n/10;
	sum += t;
	n -= 10*t;
	t = n/5;
	sum += t;
	n -= 5*t;
	sum += n;
	cout<<sum<<endl;
	return 0;
}

