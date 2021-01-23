#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		int i;
		int res = 0;
		cin>>a;
		int temp = a%10;
		for(int i=1;i<temp;i++)
			res += 10;
		for(i=0;i<=4;i++)
		{
			if(a/10 == 0)
				break;
			a /= 10;
		}
		res += ((i+1)*(i+2))/2;
		cout<<res<<endl;
	}
}

