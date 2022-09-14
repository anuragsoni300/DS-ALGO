#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;s1[i]!='\0';i++)
		s1[i] = toupper(s1[i]);
	for(int i=0;s2[i]!='\0';i++)
		s2[i] = toupper(s2[i]);
	int i=0;
	while(s1[i]!='\0')
	{
		if(s1[i] < s2[i])
		{
			cout<<"-1"<<endl;
			exit(0);
		}
		else
		if(s1[i] > s2[i])
		{
			cout<<"1"<<endl;
			exit(0);
		}
		i++;
	}
	cout<<"0"<<endl;
	return 0;
}

