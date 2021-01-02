#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count = 0;
	while(n--)
	{
		int k=3;
		bitset<3> set3;
		while(k--)
		{
			int temp;
			cin>>temp;
			set3[k] = temp;
		}
		if(set3.count()>=2)
			count++;
	}
	cout<<count<<endl;
	return 0;
}
