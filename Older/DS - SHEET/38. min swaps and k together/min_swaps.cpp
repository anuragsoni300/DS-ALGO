#include <bits/stdc++.h>

#define f(i, n) for (int i = 0; i < n; i++)

using namespace std;

void min_swaps(vector<int> vec, int k)
{
    int ans = INT_MAX, bad = 0, good = 0;
    f(i, vec.size())
    {
        if (vec[i] <= k)
            good++;
    }
    f(i, good)
    {
        if (vec[i] > k)
            bad++;
    }
    ans = bad;
    for (int i = 0; good < vec.size(); i++, good++)
    {
        if (vec[i] > k)
            --bad;
        if (vec[good] > k)
            bad++;
        ans = min(ans, bad);
    }
    cout << ans << endl;
}

int main()
{
    vector<int> vec{110, 66, 161, 419, 401, 442, 479, 454};
    int k = 291;
    min_swaps(vec, k);
    return 0;
}