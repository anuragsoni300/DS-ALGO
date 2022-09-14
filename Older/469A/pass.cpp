#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	int level[n];
	memset(level,0,n*sizeof(level[0]));
	cin>>a;
	for(int i=0;i<a;i++)
	{
		int temp;
		cin>>temp;
		level[temp-1] = 1;
	}
	cin>>b;
	for(int i=0;i<b;i++)
	{
		int temp;
		cin>>temp;
		level[temp-1] = 1;
	}
		
	for(int i=0;i<n;i++)
	{
		if(level[i] == 0)
		{
			cout<<"Oh, my keyboard!"<<endl;
			exit(0);
		}
	}
	cout<<"I become the guy."<<endl;
	return 0;
}

