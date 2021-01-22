#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int mod = a%2;
	int div = a/2;
	cout<<div<<endl;
	if(mod == 0)
		for(int i=0;i<div;i++)
			cout<<'2'<<' ';
	else
		if(mod == 1)
		{
			for(int i=0;i<div-1;i++)
				cout<<'2'<<' ';
			cout<<'3';
		}
	cout<<endl;
	return 0;
}

