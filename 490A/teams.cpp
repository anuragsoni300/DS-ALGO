#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp;
	int w = n/3;
	int count_1 = 0;
	int count_2 = 0;
	int count_3 = 0;
	int index_1[n];
	int index_2[n];
	int index_3[n];
	int a = 0;
	int b = 0;
	int c = 0;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp == 1)
		{
			count_1++;
			index_1[a++] = i+1;
		}
		if(temp == 2)
                {       
                        count_2++;
                        index_2[b++] = i+1;
                }
		if(temp == 3)
                {       
                        count_3++;
                        index_3[c++] = i+1;
                }
	}
	a = 0;
	cout<<min(min(count_1,count_2),count_3)<<endl;
	for(int i=0;i<min(min(count_1,count_2),count_3);i++)
	{
		cout<<index_1[a]<<' '<<index_2[a]<<' '<<index_3[a++]<<endl;
	}
	return 0;
}

