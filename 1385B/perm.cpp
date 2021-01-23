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
		int arr[2*n];
		for(int i=0;i<2*n;i++)
		{
			cin>>arr[i];
		}
		int qrr[n+1];
		fill(qrr+1,qrr+n+1,0);
		vector<int> vec;
		for(int i=0;i<2*n;i++)
                {
			if(qrr[arr[i]] == 0)
			{
				cout<<arr[i]<<' ';
				qrr[arr[i]] = 1;
			}
                }
		cout<<endl;
	}
	return 0;
}

