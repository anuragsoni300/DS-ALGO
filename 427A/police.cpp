#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int crime = 0;
	int crime_did = 0;
	while(n--)
	{
		int a;
		cin>>a;
		crime += a;
		if(crime < 0 && a < 0)
		{
			crime = 0;
			crime_did++;
		}
	}
	if(crime > 0)
		cout<<crime_did<<endl;
	else
		cout<<(crime*-1+crime_did)<<endl;
	return 0;
}

