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
		int count_0 = 0;
		int count_1 = 0;
		int sw = 0;
		for(int i=0;i<a;i++)
		{
			int temp;
			cin>>temp;
			arr[i] = temp%2;
			if(arr[i] == 0)
				count_0++;
			else
				count_1++;
			if((i%2 == 0 && arr[i]%2 != 0) || (i%2 == 1 && arr[i]%2 !=1))
				sw++;
		}
		if(a%2 == 0)
		{
			if(count_0 == count_1)
				cout<<ceil(sw/2)<<endl;
			else
				cout<<"-1"<<endl;
		}
		else
		{
			if(count_0 == count_1+1)
				cout<<ceil(sw/2)<<endl;
			else
				cout<<"-1"<<endl;
		}
	}
	return 0;
}
