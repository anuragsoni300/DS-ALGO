#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; ++i)

using namespace std;

bool subset(vector<int> vec1, vector<int> vec2)
{
    bool check = true;
    map<int, int> m;
    f(i, vec1.size())
    {
        m[vec1[i]]++;
    }
    f(i, vec2.size())
    {
        if (m[vec2[i]] == 0)
        {
            check = false;
            break;
        }
    }
    return check;
}

int main()
{
    vector<int> vec1{484, 595, 9595, 959, 5985}, vec2{959, 5985};
    if (subset(vec1, vec2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
