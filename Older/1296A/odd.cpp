#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
	       int a;
       	       cin>>a;
	       int temp;
	       int even = 0;
	       int odd = 0;
	       int sum = 0;
	       for(int i=0;i<a;i++)
	       {
			cin>>temp;
			if(temp%2==0)
				even++;
			else
				odd++;
			sum+=temp;
	       }
	       if(sum%2 != 0)
		       cout<<"YES"<<endl;
	       else
		       if(even > 0 && odd > 0)
			       cout<<"YES"<<endl;
		       else
			       cout<<"NO"<<endl;
	}
	return 0;
}

