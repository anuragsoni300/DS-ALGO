#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	float sum=0;
	cin>>n;
	float arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		sum+=(float)(arr[i]/100);
	}
	printf("%0.12f \n",(sum/((float)n))*100);
	return 0;
}
