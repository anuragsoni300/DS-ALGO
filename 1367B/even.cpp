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
		int arr[a];
		int count = 0;
		int flag = 0;
		for(int i=0;i<a;i++)
			cin>>arr[i];
		for(int i=0;i<a;i++)
		{
			arr[i] = arr[i]%2;
		}
		for(int i=0;i<a;i++)
			if(arr[i] != i)
				count++;
		sort(arr,arr+a);
		for(int i=0;i<a;i++)
			if(arr[i]%2 != i)
			{
				cout<<"-1"<<endl;
				flag = 1;
				break;
			}
		if(flag == 0)
			cout<<count/2<<endl;
	}
	return 0;
}
