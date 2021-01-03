#include<bits/stdc++.h>
using namespace std;
int main()
{
	int max = 0;
	int arr[4];
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
			max = arr[i];
	}
	for(int i=0;i<4;i++)
		if(arr[i]!=max)
			cout<<max-arr[i]<<' ';
	cout<<endl;
	return 0;
}

