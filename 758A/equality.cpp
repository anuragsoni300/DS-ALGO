#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max = 0,count = 0;
	cin>>n;
	if(n <= 1)
	{
		cout<<count<<endl;
		return 0;
	}
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(max<arr[i])
			max = arr[i];
	}
	for(int i=0;i<n;i++)
	{
		count += (max-arr[i]);
	}
	cout<<count<<endl;
	return 0;
}

