#include <bits/stdc++.h>

using namespace std;

bool zero_sum(vector<int> vec)
{
    if (vec.size() == 0)
        return false;
    set<int> set;
    int i = 0;
    int sum = 0;
    while (i < vec.size())
    {
        sum += vec[i++];
        if (sum == 0 || set.find(sum) != set.end())
            return true;
        set.insert(sum);
    }
    return false;
}

int main()
{
    vector<int> vec{4, 2, -3, 1, 6};
    bool temp;
    temp = zero_sum(vec);
    if (temp)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
