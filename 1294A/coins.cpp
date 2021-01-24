#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
        	int a,b,c,d;
		cin>>a>>b>>c>>d;
		int temp = max(max(a,b),c);
		int need = (temp-a)+(temp-b)+(temp-c);
		int ee = d-need;
		if(ee < 0)
			cout<<"NO"<<endl;
		else
		{
			if(ee%3 == 0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}

