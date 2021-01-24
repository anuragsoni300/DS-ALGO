#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
        	int x,y,z;
		cin>>x>>y>>z;
		int count = 0;
		if(x==y && y==z)
		{
			cout<<"YES"<<endl;
			cout<<x<<' '<<x<<' '<<x<<endl;
		}
		else
		{
			int maxx,minn;
			maxx = max(max(x,y),z);
			minn = min(min(x,y),z);
			if(maxx == x)
				count++;
			if(maxx == y)
				count++;
			if(maxx == z)
				count++;
			if(count == 2)
			{
				int temp = 1;
				cout<<"YES"<<endl;
				cout<<maxx<<' '<<minn<<' '<<temp<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}

