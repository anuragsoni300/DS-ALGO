#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		if(i%4 == 0)
		{
			cout<<'#';
	   		for(int j=1;j<n;j++)
				cout<<'.';
		}
		else
		if(i%2 == 0)
		{
			for(int i=1;i<n;i++)
				cout<<'.';
			cout<<'#';
		}
		else
		{
			for(int i=0;i<n;i++)
				cout<<'#';
		}
		cout<<endl;
	}
	return 0;
}

