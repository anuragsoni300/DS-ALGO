#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i;
	cin>>a>>b;
	for(i=1;i<10;i++)
	{
		if((a*i)%10 == 0)
		{
			cout<<i<<endl;
			break;
		}
		else if(((a*i)-b)%10 == 0)
		{
			cout<<i<<endl;
			break;
		}
	}
	if(i == 10)
		cout<<i<<endl;
	return 0;
}

