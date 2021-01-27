#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,i;
	cin>>n>>l;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	long double maxx = INT_MIN;
	if(arr[0] != 0)
		maxx = arr[0];
	if(arr[n-1] != l)
		maxx = max(maxx,(long double) l-arr[n-1]);
	for(int i=1;i<n;i++)
	{
		if(maxx < (long double) (arr[i] - arr[i-1])/2)
			maxx = (long double) (arr[i] - arr[i-1])/2;
	}
	printf("%Lf",maxx);
	cout<<endl;
	return 0;
}

