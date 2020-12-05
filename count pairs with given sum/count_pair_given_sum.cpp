#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int count_pairs(vector<int> vec, int sum)
{
    int pair_count = 0;
    map<int, int> temp_map;
    int size = vec.size();
    f(i, size) temp_map[vec[i]]++;
    f(i, size)
    {
        pair_count += temp_map[sum - vec[i]];
        if (sum - vec[i] == vec[i])
            pair_count--;
    }
    return pair_count / 2;
}

int main()
{
    vector<int> vec{1, 1, 1, 1};
    int sum = 2;
    cout << count_pairs(vec, sum) << endl;
    return 0;
}