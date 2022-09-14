#include <bits/stdc++.h>
using namespace std;
int buy_sell(vector<int> vec)
{
    int sub = 0;
    int maxx = vec[vec.size() - 1];
    int minn = vec[0];
    vector<int> temp(vec.size());
    for (int i = vec.size() - 2; i >= 0; i--)
    {
        if (maxx < vec[i])
            maxx = vec[i];
        temp[i] = max(temp[i + 1], maxx - vec[i]);
    }
    for (int i = 1; i < vec.size(); i++)
    {
        if (minn > vec[i])
            minn = vec[i];
        temp[i] = max(temp[i - 1], temp[i] + (vec[i] - minn));
    }
    return temp[vec.size() - 1];
}

int main()
{
    vector<int> vec{10, 22, 5, 75, 65, 80};
    cout << buy_sell(vec) << endl;
    return 0;
}
