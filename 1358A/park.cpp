#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n%2==0)
        {
            cout<<m*(n/2)<<endl;
        }
        else if(m%2==0)
        {
            cout<<n*(m/2)<<endl;
        }
        else
        {
            cout<<m*(n/2)+m/2+1<<endl;
        }
    }
}

