#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int miskha = 0;
	int chris = 0;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		if(a>b)
			miskha++;
		if(b>a)
			chris++;
	}
	if(miskha == chris)
		cout<<"Friendship is magic!^^"<<endl;
	else
		if(miskha > chris)
			cout<<"Mishka"<<endl;
		else
			cout<<"Chris"<<endl;
	return 0;
}

