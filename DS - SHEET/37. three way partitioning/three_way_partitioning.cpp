#include <bits/stdc++.h>

using namespace std;

vector<int> three_way_partitioning(vector<int> &vec, int low_value, int high_value)
{
    int start = 0, end = vec.size() - 1;
    int i = 0;
    while (i <= end)
    {
        if (vec[i] < low_value)
            swap(vec[i++], vec[start++]);
        else if (vec[i] > high_value)
            swap(vec[i], vec[end--]);
        else
            i++;
    }
    return vec;
}

int main()
{
    vector<int> vec{1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    three_way_partitioning(vec, 14, 20);
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;
    return 0;
}