#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	bool flag = false;
	for(int j=0;j<n;j++)
		for(int i=0;i<m;i++)
		{
			char ch;
			cin>>ch;
			if(ch == 'C' || ch == 'M' || ch == 'Y')
			{
				flag = true;
			}
		}
	if(flag == false)
		cout<<"#Black&White"<<endl;
	else
		cout<<"#Color"<<endl;
	return 0;
}

