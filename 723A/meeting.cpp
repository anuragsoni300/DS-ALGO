#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[3];
	for(int i=0;i<3;i++)
		cin>>arr[i];
	int count = 0;
	int i=0;
	sort(arr,arr+3);
	count = abs(arr[i]-arr[i+1])+abs(arr[i+1]-arr[i+2]);
	cout<<count<<endl;
	return 0;
}

