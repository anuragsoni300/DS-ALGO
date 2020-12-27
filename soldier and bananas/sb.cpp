#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	w = (((w)*(w+1))/2)*k;
	if(w-n<0)
		cout<<'0'<<endl;
	else
		cout<<w-n<<endl;
	return 0;
}

