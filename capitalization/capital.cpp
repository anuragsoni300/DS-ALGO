#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	if(s[0] >96 && s[0] <123)
		s[0] -= 32;
	cout<<s<<endl;
	return 0;
}
