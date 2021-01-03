#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{	
		int a;
		cin>>a;
		long long int sum_even = (a/2)*((a/2)+1);
		long long int sum_odd = (a/2+1)*(a/2+1);
		if((sum_odd - sum_even)%2 == 0)
		{
			cout<<"NO";
		}
		else
		{
			int no = sum_odd - sum_even;
			cout<<"YES"<<endl;
			for(int i=2;i<=a;i+=2)
				cout<<i<<' ';
			for(int i=1;i<a+2;i+=2)
			{
				if(i!=(sum_odd-sum_even))
					cout<<i<<' ';
			}
		}
		cout<<endl;	
	}
	return 0;
}

