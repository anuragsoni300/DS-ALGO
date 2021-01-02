#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int subsequence(vector<int> vec)
{
    int ans = 0;
    unordered_set<int> s;
    f(i, vec.size()) s.insert(vec[i]);
    f(i, vec.size())
    {
        if (s.find(vec[i] - 1) == s.end())
        {
            int j = vec[i];
            while (s.find(j) != s.end())
                j++;
            ans = max(ans, j - vec[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> vec{6, 6, 2, 3, 1, 4, 1, 5, 6, 2, 8, 7, 4, 2, 1, 3, 4, 5, 9, 6};
    cout << subsequence(vec) << endl;
    return 0;
}