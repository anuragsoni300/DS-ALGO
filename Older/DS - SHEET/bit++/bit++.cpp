#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x = 0;
	cin.ignore();
	while(n--)
	{
		string s;
		getline(cin,s);
		if(s.find("+") != -1)
			x++;
		if(s.find("-") != -1)
			x--;
	}
	cout<<x<<endl;
	return 0;
}

