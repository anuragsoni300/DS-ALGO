#include <bits/stdc++.h>

#define f(i, n) for (int i = 0; i < n; ++i)

using namespace std;

void n_k(vector<int> vec, int k)
{
    map<int, int> m;
    int size = vec.size();
    f(i, vec.size()) m[vec[i]]++;

    vector<int>::iterator ip;

    ip = unique(vec.begin(), vec.begin() + vec.size());

    vec.resize(distance(vec.begin(), ip));

    cout << "["
         << " ";

    f(i, m.size())
    {
        if (m[vec[i]] > (size / k))
        {
            cout << vec[i] << "-"
                 << "(" << m[vec[i]] << ")"
                 << "  ";
        }
    }

    cout << "]" << endl;
}

int main()
{
    vector<int> vec{3, 1, 2, 2, 1, 2, 3, 3};
    int k = 4;
    n_k(vec, k);
    return 0;
}
