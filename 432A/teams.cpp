#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,count = 0,teams = 0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]+k<=5)
			count++;
		if(count == 3)
		{
			teams++;
			count = 0;
		}
	}
	cout<<teams<<endl;
	return 0;
}

