#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long int a;
		cin>>a;
		int x = 1;
		long long int temp = a;
		int count = 0;
		while(temp > 0)
		{
			if(temp%10!=0)
                                count++;
                        temp /=10;
                        x *= 10;
		}
		x = 1;
		cout<<count<<endl;
		while(a>0)
		{
			if(a%10!=0)
				cout<<(a%10)*x<<' ';
			a /=10;
			x *= 10;
		}
		cout<<endl;
	}
	return 0;
}

