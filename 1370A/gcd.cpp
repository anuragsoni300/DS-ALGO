#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		int maxx = 1;
		int g = 0;
		for(int i=2;i<a;i++)
		{
			if((i+1)%(maxx+1) == 0)
		 		g = maxx+1;
			if(g>maxx)
				maxx = g;
		}
		cout<<maxx<<endl;
	}
	return 0;
}

