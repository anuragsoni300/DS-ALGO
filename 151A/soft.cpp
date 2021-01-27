#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, l, c, d, p, nl, np, b;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int a = k*l;
	a /= nl;
	b = c*d;
	c = p/np;
	cout<<min(min(a,b),c)/n<<endl;
	return 0;
}

