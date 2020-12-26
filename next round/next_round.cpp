#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int count = 0;
	int temp;
	vector<int> vec;
	int i = n;
	while(i--)
	{
		cin>>temp;
		vec.push_back(temp);
	}
	for(int i=0;i<n;i++)
		if(vec[i]>=vec[k-1]&&vec[i]>0)
			count++;
	cout<<count<<endl;
	return 0;
}

