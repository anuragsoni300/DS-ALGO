#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<2*n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<2*n;i++)
                      cout<<arr[i]<<' ';
		int qrr[2*n];
		vector<int> vec;
		fill(qrr,qrr+2*n,0);
		for(int i=0;i<2*n;i++)
		{
			if(qrr[arr[i]] == 0)
			{
				qrr[arr[i]] = 1;
				vec.push_back(arr[i]);
			}
		}
	//	for(int i=0;i<n;i++)
	//		cout<<vec[i]<<' ';
		cout<<endl;
	}
	return 0;
}

