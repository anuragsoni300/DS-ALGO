#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5];
	int t1,t2;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j] == 1)
			{
				t1 = i;
				t2 = j;
			}		
		}
	int res = abs(t1-3+1) + abs(t2-3+1);
	cout<<res<<endl;
	return 0;
}

