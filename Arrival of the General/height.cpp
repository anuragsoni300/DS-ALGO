#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max = INT_MIN,min = INT_MAX,max_pos,min_pos,count = 0;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(max<arr[i])
		{
			max_pos = i;
			max = arr[i];
		}
		if(min>=arr[i])
		{
			min_pos = i;
			min = arr[i];
		}
	}
	if(max_pos != 0)
		count += max_pos;
	if(min_pos != n-1)
		count += n-min_pos-1;
	if(max_pos > min_pos)
		count--;
	cout<<count<<endl;
	return 0;
}

