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
		int c1 = 0;
		int c2 = 0;
		int i;
		c1 += pow(2,a);
		for(i=1;i<=((a/2)-1);i++)
			c1 += pow(2,i);
		while(i<a)
		{
			c2 += pow(2,i);
			i++;
		}
		cout<<abs(c2-c1)<<endl;
	}
	return 0;
}

