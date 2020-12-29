#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cA=0,cD=0;
	cin>>n;
	string s;
	cin>>s;
	int i=0;
	while(s[i])
	{
		if(s[i]=='A')
			cA++;
		if(s[i]=='D')
			cD++;
		i++;
	}
	if(cA<cD)
		cout<<"Danik"<<endl;
	else
	if(cA>cD)
		cout<<"Anton"<<endl;
	else
		cout<<"Friendship"<<endl;
	return 0;
}
