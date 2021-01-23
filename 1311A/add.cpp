#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(a<b)
		{
			int temp = b-a;
			if(temp%2 != 0)
				cout<<'1'<<endl;
			else
				cout<<'2'<<endl;
		}
		else
			if(a>b)
			{
				int temp = a-b;
				if(temp%2 == 0)
					cout<<'1'<<endl;
				else
					cout<<'2'<<endl;
			}
			else
				cout<<'0'<<endl;
	}
}

