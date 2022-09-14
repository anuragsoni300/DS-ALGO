#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,c,d;
	int year = n;
	do
	{	
		year += 1;
		int temp = year;
		a = temp%10;
		temp /= 10;
		b = temp%10;
		temp /= 10;
		c = temp%10;
		temp /=10;
		d = temp;
	}while(a==b || b==c || c==d || a==d || b==d || a==c);
	cout<<d*1000+c*100+b*10+a<<endl;
	return 0;
}

