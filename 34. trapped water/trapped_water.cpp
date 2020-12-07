#include <bits/stdc++.h>

using namespace std;

int trapped_water(vector<int> vec)
{
    int left_max = 0, right_max = 0;
    int low = 0, high = vec.size() - 1;
    int trap_water = 0;
    while (low <= high)
    {
        if (vec[low] < vec[high])
        {
            if (vec[low] > left_max)
                left_max = vec[low];
            else
                trap_water += left_max - vec[low];
            low++;
        }
        else
        {
            if (vec[high] > right_max)
                right_max = vec[high];
            else
                trap_water += right_max - vec[high];
            high--;
        }
    }
    return trap_water;
}

int main()
{
    vector<int> vec{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trapped_water(vec) << endl;
    return 0;
}
