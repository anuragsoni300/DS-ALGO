#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	int arr[n];
	while(i<n)
	{
        	cin>>arr[i++];
	}
	int sereja = 0;
	int dima = 0;
	i=0;
	int j = n-1;
	bool flag = true;
	while(i<=j)
	{
		int maxx;
		if(arr[i] > arr[j])
		{
			maxx = arr[i];
			i++;
		}
		else
		{
			maxx = arr[j];
			j--;
		}
		if(flag == true)
			sereja += maxx;
		else
			dima += maxx;
		flag = !flag;
	}
	cout<<sereja<<' '<<dima<<endl;
	return 0;
}

