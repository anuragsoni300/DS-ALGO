#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		int temp=0;	
		if(b>a)
			cout<<b-a<<endl;
		else
		{	
			temp = a%b;
			if(temp == 0)
				cout<<temp<<endl;
			else
				cout<<b-temp<<endl;
		}
	}
	return 0;
}

