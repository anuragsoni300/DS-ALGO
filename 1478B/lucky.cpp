#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		while(a--)
		{
			bool flag = false;
			ll temp;
			cin>>temp;
			if(temp > b*10)
				flag = true;
			if(flag == false)
			{
			while(temp>=b)
			{
				if(temp%10 == b)
				{
					flag = true;
					break;
				}
				temp -= b;
			}
			}
			if(flag)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}

