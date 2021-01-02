#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,temp;
	cin>>n>>k;
	while(k > 0)
	{
		k--;
		if(n%10!=0)
		{
			n -= 1;
		}
		else
			n /= 10;
	}
	cout<<n<<endl;
	return 0;
}

