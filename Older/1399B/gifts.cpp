#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		long long min1 = INT_MAX;
		long long min2 = INT_MAX;
		long long int arr1[a],arr2[a];
		for(int i=0;i<a;i++)
		{
			cin>>arr1[i];
			if(arr1[i]<min1)
				min1 = arr1[i];
		}
		for(int i=0;i<a;i++)
		{
			cin>>arr2[i];
			if(arr2[i]<min2)
				min2 = arr2[i];
		}
		long long int sum = 0;
		for(int i=0;i<a;i++)
		{
		//	cout<<max(arr1[i]-min1,arr2[i]-min2)<<" "<<sum<<endl;
			sum += max(arr1[i]-min1,arr2[i]-min2);
		}
		cout<<sum<<endl;
	}
	return 0;
}

