#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	if(n%2==0)
	{
		a = n/2;
		b = a;
	}
	else
	{
		a = n/2;
		b = a+1;
	}
	while(1)
	{
		if((a == 1 || a == 2 || a == 3 || a == 5 || a == 7) || (b == 1 || b == 2 || b == 3 || b == 5 || b == 7));
		else
		if((a%2==0 || a%3==0 || a%5 == 0 || a%7 == 0) && (b%2==0 || b%3==0 || b%5 == 0 || b%7 == 0))
		{
			cout<<a<<' '<<b<<endl;
			exit(0);
		}
		a += 1;
		b -= 1;
	}
	return 0;
}

