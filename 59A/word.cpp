#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int count = 0;
	int COUNT = 0;
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i] > 96 && s[i] < 123)
			count++;
		else
			COUNT++;
		i++;
	}
	i = 0;
	while(s[i])
	{
		if(COUNT <= count)
			putchar(tolower(s[i]));
		else
			putchar(toupper(s[i]));
		i++;
	}
	cout<<endl;
	return 0;
}

