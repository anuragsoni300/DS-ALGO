#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0,temp=0;
	cin>>n;
	int max = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		temp -= a;
		cin>>b;
		temp += b;
		if(temp > max)
			max = temp;
	}
	cout<<max<<endl;
	return 0;
}

