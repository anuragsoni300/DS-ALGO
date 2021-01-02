#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int time = b;
	int i=0;
	while(time<=240&&i<=a)
	{
		i++;
		time += 5*i;
	}
	cout<<i-1<<endl;
	return 0;
}

