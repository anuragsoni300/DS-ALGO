#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,n,count = 0;
	cin>>a>>b>>c>>d>>n;
	int arr[n+1];
	memset(arr,1,n*sizeof(arr[0]));
	for(int i=1;i<=n;i++)
	{
		if(i%a == 0)
			arr[i] = 0;
		if(i%b == 0)
			arr[i] = 0;
		if(i%c == 0)
			arr[i] = 0;
		if(i%d == 0)
			arr[i] = 0;
	}
	for(int i=1;i<=n;i++)
		if(arr[i] == 0)
			count++;
	cout<<count<<endl;
	return 0;
}
